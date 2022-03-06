#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <cstring>

void Student::init() {
    name[0] = '\0';
    math    = 0.0;
    english = 0.0;
    history = 0.0;
}

void Student::set_name(const char* name) {
    strcpy(this->name, name);
}

void Student::set_the_grade_for_mathematics(float math) {
    this->math = math;
}

void Student::set_the_grade_for_english(float english) {
    this->english = english;
}

void Student::set_the_grade_for_history(float history) {
    this->history = history;
}

const char* Student::get_name() const {
    return name;
}

float Student::get_the_grade_for_mathematics() const {
    if (math >= 1.0 && math <= 10.0)
        return math;
}

float Student::get_the_grade_for_english() const {
    if (english >= 1.0 && english <= 10.0)
        return english;
}

float Student::get_the_grade_for_history() const {
    if (history >= 1.0 && english <= 10.0)
        return history;
}

float Student::get_the_average_grade() const {
    return (math + english + history) / 3;
}