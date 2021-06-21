#include "Complex.h"

Complex::Complex()
{
    real = 0;
    imag = 0;
}
Complex::Complex(int r=0, int i=0)
{
  real = r;
  imag = i;
}
Complex:: Complex operator+(const Complex &r2)
{
   complex temp;
   temp.real = real + r2.real;
   temp.imag = imag + r2.imag;
   return temp
}
Complex::Complex operator-(const Complex &r2)
{
   complex temp;
   temp.real = real - r2.real;
   temp.imag = imag - r2.imag;
   return temp
}
Complex::Complex operator*(const Complex &r2)
{
   complex temp;
   temp.real = real * r2.real;
   temp.imag = imag * r2.imag;
   return temp
}
bool Complex operator==(const Complex &r2)
{
  return (real == r2.real && imag == r2.imag);
}
Complex::Complex operator++(int something)
{
    Complex thing(*this);
    ++real;
    return thing;
}
Complex::Complex& operator++()
{
    ++real;
    return *this;
}
void Complex::display() const
{
    cout<<real<<" + i"<<imag<<endl;
}
