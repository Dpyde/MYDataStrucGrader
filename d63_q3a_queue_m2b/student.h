#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  T temp=mData[(mFront+pos)%mCap];
  while (pos<mSize-1)
  {
    mData[(mFront+pos)%mCap]=mData[(mFront+pos+1)%mCap];
    pos++;
  }
  mData[(mFront+pos)%mCap]=temp;
}

#endif
