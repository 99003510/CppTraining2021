#include <iostream>

using namespace std;
#include "Distance.h"

int main()
{
    Distance dist1(2,8), dist2(3,5), dist3();
    dist3=dist1.operator+(dist2);

    dist1.display;
    cout << "Hello world!" << endl;
    return 0;
}
