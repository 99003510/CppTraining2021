#include <iostream>

using namespace std;
#include "Time.h"

int main()
{
    Time t1(10,20,30),t2(1,2,3),t3;
    t3=t1+t2;
    t3.display();
    return 0;
}
