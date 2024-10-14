#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    CP::stack<T> temp;
    int count = 0;
    for (size_t i = 0; i < b + 1; i++)
    {
        temp.push(this->top());
        this->pop();
    }
    for (size_t i = 0; i < b - a + 1; i++) // 1  3
    {
        this->push(temp.mData[b - i]);
        this->push(temp.mData[b - i]);
    }
    for (size_t i = 0; i < a; i++)
    {
        this->push(temp.mData[a - 1 - i]);
    }
}

#endif