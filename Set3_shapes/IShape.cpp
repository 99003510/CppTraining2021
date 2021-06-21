#include "IShape.h"

Polygon::Polygon(int n=4)
{
    m_sides = n;
}
Circle::Circle(int r)
{
    m_radius = r;
}
Rectangle::Rectangle(int l=1,int b=1)
{
    length = l;
    breadth = b;
}

