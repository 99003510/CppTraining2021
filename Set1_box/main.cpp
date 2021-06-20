#include <iostream>

using namespace std;
#include "Box.h"

int main()
{
    Box b1(12,23,11);
    cout<<"Volume:"<<b1.volume()<<endl;
    Box b2=b1;
    cout<<"Volume of box:"<<b2.volume()<<endl;
    return 0;
}
