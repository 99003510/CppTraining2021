#include "MyStack.h"

/*MyStack::MyStack(int m=0)
{
    maxlen = m;
}*/
template <class T> MyStack<T>::Stack() { top = -1; }

template <class T> void MyStack<T>::push(T val)
{
    if(isFull)
    {
        cout<<"Stack is full!!\n";
    }
    cout<<"Insert an element"<<val<<endl;
    top = top + 1;
    m_arr[top] = val;
}
template <class T> bool MyStack<T>::isFull()
{
    if(top == (SIZE-1)
       return 1;
    else
        return 0;
}
template<class T> bool MyStack<T>::isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}
template <class T> T MyStack<T>::pop()
{
    T popped_element = m_arr[top];
    top--;
    return popped_element;
}
template <class T> t MyStack<T>::topElement()
{
    T top_element = m_arr[top];
    return top_element;
}
