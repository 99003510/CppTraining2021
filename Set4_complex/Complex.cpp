#include "Complex.h"

Complex<T>::Complex<T>(T r=0.0, T i=0.0)
{
    m_real = r;
    m_image = i;
}
 Complex<T>(const Complex<T>& c)
    :m_real(c.m_real), m_image(c.m_image) { };


template<typename T>
Complex<T>& Complex<T>::operator +=(const Complex<T>& c2)
{
    m_real += c2.m_real;
    m_image += c2.m_image;
    return *this;
}
Complex<T>::void display()
{
    cout<<m_real<<"+i "<<m_image<<endl;
}
