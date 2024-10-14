#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::split_stack(int k) const
{

    std::vector<std::vector<T>> res;

    int quire = mSize / k; // each vector size

    int saze = mSize % k; // Exceeded number 

    int pos = 0;//iterator for data to insert

    for (size_t i = 0; i < k; i++)
    {
        res.push_back(std::vector<T>());//initialized vector
    }


    for (size_t i = 1; i < saze+1; i++)//loop for exceed first
    {
        res[saze - i].push_back(mData[pos]);
        pos++;
    }

    for (size_t j = 0; j < quire; j++)
    {
        for (size_t i = 0; i < k; i++)
        {
            res[k - i-1].push_back(mData[pos]);
            
            pos++;
        }
    }

    return res;
}

#endif
