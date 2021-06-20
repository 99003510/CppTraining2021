#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#include "Account.h"

int main()
{
    Account acc1(2019, "Rajath", 20000);
     acc1.credit();
     acc1.debit();
     acc1.display();
    return 0;
}
