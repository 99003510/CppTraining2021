#include <iostream>

using namespace std;
#include "IShape.h"

int main()
{
    IShape *s;
    s = Rectangle(10,20);
    s->area();
    return 0;
}
