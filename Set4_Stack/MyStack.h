#ifndef MYSTACK_H
#define MYSTACK_H
#include <iostream>

using namespace std;
#define SIZE 5

template<class T> class MyStack
{
        T m_arr[SIZE];
        int top;
        int maxlen;
    public:
        MyStack();
        //MyStack(int maxlen);
        void push(T val); //
        T pop();
        T topElement();
        bool isEmpty();
        bool isFull();

};

#endif // MYSTACK_H
