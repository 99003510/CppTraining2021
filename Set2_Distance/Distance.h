#ifndef DISTANCE_H
#define DISTANCE_H
#include <iostream>

using namespace std;

class Distance
{
    private:
        int feet;
        int inches;
    public:
        Distance();
        Distance(int,int);
        Distance(int);
        Distance operator+(const Distance&);
        Distance operator-(const Distance&);
        Distance operator+(int);
        Distance operator-(int);
        Distance& operator++();
        bool operator==(const Distance&);
        bool operator<(const Distance&);
        bool operator>(const Distance&);
        void display();



};

#endif // DISTANCE_H
