#include "Sort.h"
#include <iostream>

int main(int argc, char* argv[]) {
    // create the list that needs to be sorted from an initialization list
    Sort s;
    s.BubbleSort();
    s.Print();

    //create the list that needs to be sorted from an existing vector
    int vector[] = { 12, 3, 9, 10, 8 };
    Sort s1(vector,5);
    s1.InsertSort(false);
    s1.Print();

    //create the list that needs to be sorted from a string
    Sort s2("11,8,6,9");
    s2.BubbleSort(false);
    s2.Print();

    //create the list that needs to be sorted out of random values within a specific interval (min, max)
    Sort s3(6, 1, 12);
    s3.InsertSort(false);
    s3.Print();

    //create the list that needs to be sorted using variadic parameters
    Sort s4(7,9,8,7,6,5,4,3);
    s4.BubbleSort();
    s4.Print();

    std::cout << "Pentru lista sortata s1 elementul cu indexul 0 este: " << s1.GetElementFromIndex(0) << std::endl;
    std::cout << "Numarul elementelor din s2 este: " << s2.GetElementsCount() << std::endl;
}