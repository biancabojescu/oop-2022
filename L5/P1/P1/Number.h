#pragma once
class Number {
    //add data member
    int number;
    int base;
    int digit_count;
    char* char_number;
  public:
    Number(const char* value, int base); // where base is between 2 and 16
    Number(int nr);
    ~Number();
    //add operators and copy/move constructor
    Number& operator++();
    Number operator++(int);
    Number& operator--();
    Number operator--(int);
    Number& operator=(int nr);
    Number& operator=(const char* r);
    bool operator[](int index);

    friend int operator+(const Number& l, const Number& r);
    friend int operator+(const Number& l,int r);
    friend int operator+(int l, const Number& r);

    friend int operator-(const Number& l, const Number& r);
    friend int operator-(const Number& l, int r);
    friend int operator-(int l, const Number& r);

    friend bool operator+=(int l, const Number& r);
    friend bool operator+=(Number& l, const Number& r);

    void SwitchBase(int newBase);
    void Print();
    int GetDigitsCount(); // returns the number of digits for the current number
    int GetBase();        // returns the current base
};

bool operator==(const Number& l, const Number& r);
bool operator>(const Number& l, const Number& r);
bool operator>=(const Number& l, const Number& r);
bool operator<(const Number& l, const Number& r);
bool operator<=(const Number& l, const Number& r);