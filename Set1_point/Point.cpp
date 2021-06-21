#include "Point.h"

Point::Point()
{
    m_x = 0;
    m_y = 0;
}
Point::Point(int x, int y)
{
    m_x = x;
    m_y = y;
}
Point::Point(const Point&p)
{
    m_x= p.m_x;
    m_y= p.m_y;
}
bool Point:: isOrigin() const
{
    if(m_x==0 && m_y==0)
        return(true);
    else
        return(false);
}
bool Point:: isOnXAxis()
{
    if(m_x==0 && m_y!=0)
        return true;
    else
        return false;
}
bool Point::isOnYAxis()
{
    if(m_y==0 && m_x!=0)
        return true;
    else
        return false;
}
void Point::display()
{
    cout<<"Point X: "<<m_x<<endl;
    cout<<"Point Y: "<<m_y<<endl;
}
