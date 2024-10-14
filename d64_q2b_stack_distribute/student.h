#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
template <typename T>


std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
 std::vector<std::vector<T>> res(k);
    int quire=mSize/k;
    int saze=mSize%k; 
    int pos=mSize- 1;

    
 for (size_t i = 0; i < k; i++)
 {  
    for (size_t j = 0; j < quire; j++)
    {
        res[i].push_back(mData[pos]);
        pos--;
    }
    if (i<saze)
    {   res[i].push_back(mData[pos]);
        pos--;
    }
 }
 

return res;
}  

#endif
