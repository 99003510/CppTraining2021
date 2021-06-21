#include <iostream>

using namespace std;
#include "Complex.h"

int main()
{
    Complex<int> cc1(2,4), cc2(3,8);
    cc1+=cc2;
    cc1.display();
    cout << "Hello world!" << endl;
    return 0;
}
