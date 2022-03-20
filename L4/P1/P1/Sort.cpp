#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <stdarg.h>
#include <cstring>
#include <iostream>

Sort::Sort() {
    nr = 0;
    v  = nullptr;
}

Sort::Sort(unsigned nr, int min, int max) {
    this->nr = nr;
    this->v  = new int[nr];
    srand(time(nullptr));
    for (unsigned i = 0; i < nr; ++i) {
        this->v[i] = rand() % max + min;
    }
}

Sort::Sort(int* vector, unsigned nr) {
    this->nr = nr;
    this->v  = new int[nr];
    for (unsigned index = 0; index < nr; ++index) {
        this->v[index] = vector[index];
    }
}

Sort::Sort(unsigned nr, ...) {
    va_list args;
    va_start(args, nr);
    v        = new int[nr];
    this->nr = nr;
    for (unsigned index = 0; index < nr; ++index) {
        this->v[index] = va_arg(args, int);
    }
    va_end(args);
}

Sort::Sort(const char* sir) {
    unsigned num = 1;
    for (int i = 0; i < strlen(sir); ++i) {
        if (sir[i] == ',') {
            ++num;
        }
    }
    nr        = num;
    v         = new int[num];
    int index = 0;
    char* aux = new char[(strlen(sir) + 1) * sizeof(char)];
    strcpy(aux, sir);
    char* ok = strtok(aux, ",");
    while (ok != nullptr) {
        int numar = atoi(ok);
        v[index]  = numar;
        index++;
        ok = strtok(nullptr, ",");
    }
    delete[] aux;
}

void Sort::InsertSort(bool ascendent) {
    for (unsigned i = 1; i < nr; ++i) {
        int j    = i - 1;
        int temp = v[i];
        while (j >= 0 && v[j] > temp) {
            v[j + 1] = v[j];
            j        = j - 1;
        }
        if (v[j + 1] != temp) {
            v[j + 1] = temp;
        }
    }
    ascendent = true;
}

void Sort::BubbleSort(bool ascendent) {
    int ultim = nr - 1;
    while (ultim > 0) {
        int n = ultim;
        ultim = 0;
        for (int i = 0; i < n; ++i) {
            if (v[i] > v[i + 1]) {
                std::swap(v[i], v[i + 1]);
                ultim = i;
            }
        }
    }
    ascendent = true;
}

void Sort::Print() {
    if (nr > 0) {
        std::cout << "Vectorul sortat este:"
                  << "\n";
        for (unsigned i = 0; i < nr; ++i) {
            std::cout << v[i] << ' ';
        }
    } else
        std::cout << "-1";
    std::cout << "\n";
}

int Sort::GetElementsCount() {
    if (nr > 0)
        return nr;
    else
        -1;
}

int Sort::GetElementFromIndex(int index) {
    if (index < nr) {
        int x = v[index];
        return x;
    } else
        return -1;
}
