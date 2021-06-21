#ifndef TIME_H
#define TIME_H
#include <iostream>

using namespace std;

class Time
{
     private:
        int hour;
        int minutes;
        int seconds;

    public:
        Time();
        Time(int,int,int);
        //Time(int,int);
        Time operator+(const Time&);
        Time operator-(const Time&);
        Time operator+(int);
        Time operator-(int);
        Time& operator++();
        Time operator++(int);
        Time& operator+=(const Time&);
        bool operator==(const Time&);
        void display() const;



};

#endif // TIME_H
