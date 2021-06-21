#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point
{

    private:
        int m_x;
        int m_y;
    public:
       Point();
       Point(int,int);
       Point(const Point&);
       //double distanceFromOrigin() const;
       bool isOrigin() const;
       bool isOnXAxis();
       bool isOnYAxis();
       void display();

};

#endif // POINT_H
