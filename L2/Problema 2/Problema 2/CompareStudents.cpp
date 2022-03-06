#include "CompareStudents.h"
#include <iostream>

char CompareStudents::compare_names(Student student1, Student student2) const {
    if (student1.get_name() == student2.get_name())
        return -1;
    else
         return 1;
}

float CompareStudents::compare_math_grades(Student student1, Student student2) const {
    if (student1.get_the_grade_for_mathematics() == student2.get_the_grade_for_mathematics())
        return 0;
    else {
        if (student1.get_the_grade_for_mathematics() > student2.get_the_grade_for_mathematics())
            return 1;
        else
            return -1;
    }
}

float CompareStudents::compare_english_grades(Student student1, Student student2) const {
    if (student1.get_the_grade_for_english() == student2.get_the_grade_for_english())
        return 0;
    else {
        if (student1.get_the_grade_for_english() > student2.get_the_grade_for_english())
            return 1;
        else
            return -1;
    }
}

float CompareStudents::compare_history_grades(Student student1, Student student2) const {
    if (student1.get_the_grade_for_history() == student2.get_the_grade_for_history())
        return 0;
    else {
        if (student1.get_the_grade_for_history() > student2.get_the_grade_for_history())
            return 1;
        else
            return -1;
    }
}

float CompareStudents::compare_average(Student student1, Student student2) const {
    if (student1.get_the_average_grade() == student2.get_the_average_grade())
        return 0;
    else {
        if (student1.get_the_average_grade() > student2.get_the_average_grade())
            return 1;
        else
            return -1;
    }
}