#pragma once
class Fractions {
private:
    int numerator;
    int denominator; // �����������

public:
    void setValues(int num, int denom);
    void print();

    Fractions operator+(const Fractions& other);
    Fractions operator-(const Fractions& other);
    Fractions operator*(const Fractions& other);
    Fractions operator/(const Fractions& other);
};
