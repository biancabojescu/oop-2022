#define _CRT_SECURE_NO_WARNINGS
#include "NumberList.h"
#include <array>
#include <iostream>

void NumberList:: Init() {
    count = 0;
}

bool NumberList::Add(int x) {
    int n;
    std::cout << "Numarul elementelor din vector este: ";
    std::cin >> n;
    std::cout << "Vectorul este: ";
    for (int i=0; i <= n; i++) {
        std::cin >> this->numbers[i];
    }
    while (count <= n) {
        count++;
    }
    if (count >= 10)
        return false;
    else
        this->numbers[count] = x;

}

void NumberList::Sort() {
    int n;
    int aux = count;
    while (count > 0){
        n = count;
        count = 0;
        for (int i = 0; i < n; i++) {
            if (this->numbers[i] > this->numbers[i + 1]) {
                std::swap(this->numbers[i], this->numbers[i + 1]);
                count = i;
            }
        }
    }
    count = aux;
}

void NumberList::Print() {
    printf("Vectorul sortat este: ");
    for (int i = 0; i <= count; i++) {
        std::cout << this->numbers[i] << " ";
    }
}