#define _CRT_SECURE_NO_WARNINGS
#include "NumberList.h"
#include <iostream>

void main() {
    NumberList nr;
    int x;
    std::cout << "Se adauga in vector pe prima pozitie libera numarul: ";
    std::cin >> x;
    nr.Init();
    nr.Add(x);
    nr.Sort();
    nr.Print();
}