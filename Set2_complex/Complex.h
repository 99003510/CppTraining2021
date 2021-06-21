#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex
{
    private:
        int real;
        int imag;

    public:
        Complex();
        Complex(int,int);
        Complex(int);
        Complex operator+(const Complex&r2);
        Complex operator-(const Complex&r2);
        Complex operator*(const Complex&r2);
        Complex& operator++();
        Complex operator++(int);
        bool operator==(const Complex&r2);
        void display() const;
        friend std::ostream& operator<<(const std::ostream&, const Complex&);



};

#endif // COMPLEX_H
