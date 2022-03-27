#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
#include <stdarg.h>
#include <string.h>
#include <iostream>

Number::Number(const char* value, int base) {
    this->base = base;
    int nr   = 1;
    for (int i = 0; i < strlen(value); ++i) {
        nr++;
    }
    digit_count = nr;
    char* sir   = new char[strlen(value) + 1];
    strcpy(sir, value);
    while (sir != nullptr) {
        int aux = sir[0];
        this->char_number = sir;
        for (int index = 1; index < nr; index++) {
            aux = aux * 10 + sir[index];
        }
        number = aux;
    }
    delete[] sir;
}

Number::Number(int nr) {
    this->number = nr;
}

Number::~Number() {
    delete[] char_number;
}

Number& Number::operator++() {
    number++;
    return *this;
}

Number Number::operator++(int) {
    const Number copy = *this;
    ++(*this);
    return copy;
}

Number& Number::operator--() {
    number--;
    return *this;
}

Number Number::operator--(int) {
    const Number copy = *this;
    --(*this);
    return copy;
}

void Number::SwitchBase(int newBase) {
    int x = 0;
    int p = 1;
    if (base >= 2 && base <= 9) {
        while (number != 0) {
            int r  = number % 10;
            x      = x + r * p;
            p      = p * base;
            number = number / 10;
        }
        number = x;
    }
    if (base >= 11 && base <= 16) {
        int aux = 0;
        for (int i = digit_count-1; i >= 0; i--) {
            if (char_number[i] = 'A')
                char_number[i] = 10;
            if (char_number[i] = 'B')
                char_number[i] = 11;
            if (char_number[i] = 'C')
                char_number[i] = 12;
            if (char_number[i] = 'D')
                char_number[i] = 13;
            if (char_number[i] = 'E')
                char_number[i] = 14;
            if (char_number[i] = 'F')
                char_number[i] = 15;
            aux = aux+char_number[i] * base ^ i;
        }
        number = aux;
    }
        if (newBase >= 2 && newBase <= 9) {
            x = 0;
            p = 1;
            while (number != 0) {
                int r  = number % newBase;
                x      = x + r * p;
                p      = p * 10;
                number = number / newBase;
            }
            number = x;
        }
        if (newBase >= 11 && newBase <= 16) {
            char* hex = new char[20];
            int digit = 0;
            while (number != 0) {
                int r = number % newBase;
                if (r <= 9)
                    hex[digit] = char(r + 48);
                else
                    hex[digit] = char(r + 55);
                number = number / 16;
                digit++;
            }
            int aux = hex[digit - 1];
            for (int i=digit-2; i>=0;i--)
                aux = aux * 10 + hex[i];
            number = aux;
            delete[] hex;
        } 
        base = newBase;
}

Number& Number::operator=(int nr) {
    number = nr;
    return (*this);
}

void Number::Print() {
    std::cout << number;
}

Number& Number::operator=(const char* r) {
    *char_number = *r;
    return (*this);
}

int Number::GetDigitsCount() {
    if (digit_count > 0) {
        return digit_count;
    } 
    else
        return -1;
}

bool Number::operator[](int index) {
    return (number & (1 << index)) != 0;
}

int Number::GetBase() {
    return base;
}

int operator+(const Number& l, const Number& r) {
    return l.number + r.number;
}

int operator+(const Number& l, int r) {
    return l.number+r;
}

int operator+(int l, const Number& r) {
    return l + r.number;
}

int operator-(const Number& l, const Number& r) {
    return l.number - r.number;
}

int operator-(const Number& l, int r) {
    return l.number - r;
}

int operator-(int l, const Number& r) {
    return l - r.number;
}

bool operator==(const Number& l, const Number& r) {
    return l == r;
}

bool operator+=(int l, const Number& r) {
    l=r.number;
    return true;
}

bool operator+=(Number& l, const Number& r){
    l = r;
    return true;
}

bool operator>(const Number& l, const Number& r) {
    return l>r;
}

bool operator>=(const Number& l, const Number& r) {
    return l>=r;
}

bool operator<(const Number& l, const Number& r) {
    return l < r;
}

bool operator<=(const Number& l, const Number& r) {
    return l<=r;
}
