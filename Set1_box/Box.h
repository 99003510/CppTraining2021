#ifndef BOX_H
#define BOX_H
#include <iostream>
using namespace std;

class Box
{
     private:
        int length;
        int breadth;
        int height;

    public:
        Box();
        Box(int l,int b,int h);
        Box(const Box&);
        int volume();
        void display();

};

#endif // BOX_H
