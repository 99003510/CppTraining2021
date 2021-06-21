#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;
template<typename T>
class Complex
{
        T m_real;
        T m_image;
    public:
        Complex<T>(T,T);
        Complex<T>(const Complex<T>&);
        void display();
        Complex<T>& operator +=(const Complex<T>&);

};

#endif // COMPLEX_H
