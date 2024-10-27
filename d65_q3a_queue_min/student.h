#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos, Comp comp) const
{
  T res = T();
  int count = 0;

  for (auto &&i : pos)
  {
    if (i < mSize)
    {
      if (count = 0)
      {
         res = mData[(mFront + i) % mCap];
        count++;//no more initialized
      }
      else if (comp(mData[(mFront + i) % mCap], res))
      {
        res = mData[(mFront + i) % mCap];
      }
    }
  }
  return res;
}

#endif
