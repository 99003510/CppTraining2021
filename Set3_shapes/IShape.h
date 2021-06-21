#ifndef ISHAPE_H
#define ISHAPE_H
#include <iostream>

using namespace std;

class IShape
{

    public:
        virtual double area();
        virtual double circumference();

};
class Polygon:public IShape
{
        int m_sides;
    public:
        Polygon(int n); //no.of sides
};
class Circle : public IShape
{
    double m_radius;
    public:
        double PI = 22.0/7.0;
        Circle(int r);
        double area()
        {
             return (PI * m_radius * m_radius);
        }
        double circumference()
        {
         return (2 * PI * m_radius);
       }
};
class Rectangle : public Polygon
{
    int length;
    int breadth;
    public:
        Rectangle(int l,int b);
        double area()
        {
            return (length * breadth);
        }
        double circumference()
        {
             return (2* length + 2 * breadth);
        }
};

#endif // ISHAPE_H
