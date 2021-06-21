#include <iostream>

using namespace std;

int main()
{
                IEmployee* iemp ; // pointer to the object of the base class Shape
                Employee emp(12,"anitha",30000,2); // object of class Rectangle
                iemp = &remp ;
                iemp->display( ) ;
                iemp->payroll( );
                iemp->appraisal();
                Engineer eng ;     // object of class Circle
                iemp = &ceng ;
                iemp->display( );
                iemp->payroll();
                iemp=appraisal();
                Manager mng;
	            iemp=&mng;
                iemp->display();
                iemp->payroll();
                iemp->appraisal();
    return 0;
}
