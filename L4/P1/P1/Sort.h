#pragma once
class Sort {
    // add data members
    unsigned nr;
    int* v;
  public:
    // add constuctors
    Sort();
    Sort(unsigned nr, int min, int max);
    Sort(int* vector, unsigned nr);
    Sort(unsigned nr,...);
    Sort(const char* sir);
    void InsertSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);
};
