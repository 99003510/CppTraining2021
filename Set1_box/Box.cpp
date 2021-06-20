#include "Box.h"
Box::Box()
{
    length = 1;
    breadth = 1;
    height = 1;
}
Box::Box(int l,int b,int h)
{
    length = l;
    breadth = b;
    height = h;
}

Box::Box(const Box &bx)
{
    length = bx.length;
    breadth = bx.breadth;
    height = bx.height;
}
int Box::volume()
{
 return (length * breadth * height);
}
void Box::display()
{

}
