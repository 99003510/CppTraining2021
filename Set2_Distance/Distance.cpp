#include "Distance.h"

Distance::Distance()
{
    feet = 0;
    inches = 0;
}
Distance::Distance(int f=0,int i=0)
{
    feet = f;
    inches = i;
}
Distance Distance::operator+(const Distance&d1)
{
    inches = inches+d1;
    if(inches >= 12)
    {
        feet += inches/12;
        inches %= 12;
    }
    return *this;
}
Distance Distance:: operator-(const Distance&d1)
{
    Distance temp;
    inches -= d1.inches;
    if(inches == 0)
    {
        feet--;
        inches = 12;
    }
    return *this;
}
Distance Distance:: operator+(int dummy)
{
    inches+= dummy;
    if(inches >= 12)
    {
        feet += inches/12;
        inches %= 12;
    }
    return *this;
}
Distance Distance:: operator-(int dummy)
{
     inches -= dummy;
    if(inches = 0)
    {
        feet--;
        inches = 12;
    }
    return *this;
}
Distance:: Distance& operator++()
{
    ++inches;
    if(inches >= 12)
    {
        feet += inches/12;
        inches %= 12;
    }
    return *this;

}
bool Distance::operator==(const Distance&d1)
{
    return (feet==d1.feet && inches==d1.inches);
}
bool Distance::operator<(const Distance&d1)
{
    return (feet<d1.feet );
}
bool Distance::operator>(const Distance&)
{
    return (feet>d1.feet );
}
Distance::void display()
{
    cout<<feet<<"'"<<inches<<endl;
}
