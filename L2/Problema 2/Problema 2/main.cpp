#include "CompareStudents.h"
#include "student.h"
#include <iostream>

void main() {
    CompareStudents B4;

    Student student1;
    student1.set_name("Popescu Maria");
    student1.set_the_grade_for_mathematics(9.8);
    student1.set_the_grade_for_english(9.0);
    student1.set_the_grade_for_history(8.6);

    Student student2;
    student2.set_name("Andreiescu Ionut");
    student2.set_the_grade_for_mathematics(8.2);
    student2.set_the_grade_for_english(10.0);
    student2.set_the_grade_for_history(8.6);

    if (B4.compare_names(student1, student2) == 1)
        std::cout << "Studentii comparati sunt: " << student1.get_name() << " si " << student2.get_name() << "."
                  << "\n";
    if (B4.compare_names(student1, student2) == -1)
        std::cout << "A fost trecut acelasi student de 2 ori"<< "\n";

    if (B4.compare_math_grades(student1, student2) == 0)
        std::cout << "Studentii au aceiasi nota la matematica."
                  << "\n";
    if (B4.compare_math_grades(student1, student2) == 1)
        std::cout << "Studentul cu numele de " << student1.get_name() << " are nota la matematica mai mare."
                  << "\n";
    if (B4.compare_math_grades(student1, student2) == -1)
        std::cout << "Studentul cu numele de " << student2.get_name() << " are nota la matematica mai mare."
                  << "\n";

    if (B4.compare_english_grades(student1, student2) == 0)
        std::cout << "Studentii au aceiasi nota la engleza."
                  << "\n";
    if (B4.compare_english_grades(student1, student2) == 1)
        std::cout << "Studentul cu numele de " << student1.get_name() << " are nota la engleza mai mare."
                  << "\n";
    if (B4.compare_english_grades(student1, student2) == -1)
        std::cout << "Studentul cu numele de " << student2.get_name() << " are nota la engleza mai mare."
                  << "\n";

    if (B4.compare_history_grades(student1, student2) == 0)
        std::cout << "Studentii au aceiasi nota la istorie."
                  << "\n";
    if (B4.compare_history_grades(student1, student2) == 1)
        std::cout << "Studentul cu numele de " << student1.get_name() << " are nota la istorie mai mare."
                  << "\n";
    if (B4.compare_history_grades(student1, student2) == -1)
        std::cout << "Studentul cu numele de " << student2.get_name() << " are nota la istorie mai mare."
                  << "\n";

    if (B4.compare_average(student1, student2) == 0)
        std::cout << "Studentii au aceiasi medie."
                  << "\n";
    if (B4.compare_average(student1, student2) == 1)
        std::cout << "Studentul cu numele de " << student1.get_name() << " are media mai mare."
                  << "\n";
    if (B4.compare_average(student1, student2) == -1)
        std::cout << "Studentul cu numele de " << student2.get_name() << " are media mai mare."
                  << "\n";
}