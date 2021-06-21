#include "Time.h"

Time::Time()
{
    hour = 0;
   minutes = 0;
   seconds = 0;
}
Time::Time(int h=0,int m=0,int s=0)
{
   hour = h;
   minutes = m;
   seconds = s;
}
Time::Time operator+(const Time&a1)
{
    seconds += a1;
  if (seconds >= 60)
  { minutes += seconds/60;
    seconds %= 60;
    if (minutes >=60)
    { hour = (hour + minutes/60) % 24;
      minutes %= 60;
    }
  }
  return *this;
}
Time::Time& operator++();
{
    ++seconds;
     if (seconds >= 60)
  { minutes += seconds/60;
    seconds %= 60;
    if (minutes >=60)
    { hour = (hour + minutes/60) % 24;
      minutes %= 60;
    }
  }
    return *this;
}
Time::Time operator++(int)
{
     ++seconds;
     if (seconds >= 60)
  { minutes += seconds/60;
    seconds %= 60;
    if (minutes >=60)
    { hour = (hour + minutes/60) % 24;
      minutes %= 60;
    }
    return *this;
}
Time::void display() const
{
    cout<<hour<<":"<<minutes<<":"<<seconds<<endl;
}
