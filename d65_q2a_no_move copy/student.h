#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  int temp;
  for (size_t i = 0; i < this->mData.size(); i++)
  {
    if(!(temp>mData[i].size()))
    {
      return mData[i][mData[i].size()-temp];
    }  
    temp-=mData[i].size();
  }
  
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  aux.push_back();    
}

#endif
