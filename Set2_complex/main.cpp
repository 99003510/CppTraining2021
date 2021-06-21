#include <iostream>

using namespace std;
#include "Complex.h"

int main()
{
    Complex c1(2,4);
    Complex c2(3,7);
    Complex c3,c4,c5;

    c3 = c1 + c2;
    c3.display();

    return 0;
}
