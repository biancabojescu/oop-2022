#pragma once
#include "student.h"

class CompareStudents {   
  public:
    char compare_names(Student student1, Student student2) const;
    float compare_math_grades(Student student1, Student student2) const;
    float compare_english_grades(Student student1, Student student2) const;
    float compare_history_grades(Student student1, Student student2) const;
    float compare_average(Student student1, Student student2) const;
};
