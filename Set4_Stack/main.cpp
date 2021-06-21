#include <iostream>

using namespace std;
#include "MyStack.h"
#define SIZE 5

int main()
{
    MyStack<int> integer_stack;

    integer_stack.push(2);
    cout << "Hello world!" << endl;
    return 0;
}
