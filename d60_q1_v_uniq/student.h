
#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <unordered_set>
// you can include any other file here
// you are allow to use any data structure

template <typename T>
void CP::vector<T>::uniq()
{
    std::unordered_set<T> st(mSize);

    for (size_t i = 0; i < mSize; i++)
    {
        st.insert(mData[i]);
    }
    vector<T> result(mSize);
    std::array[T] ams(mSize);
    
    int count=0;
    for (size_t i = 0; i < count; i++)
    {
        ams[count]=st[count];
    }
    
}

#endif
