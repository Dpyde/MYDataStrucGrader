#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos, Comp comp) const
{
  T result;
  int count=0;
  for (auto &&i : pos)
  {
     if (i < mSize)
    {if (count == 0)
    {result=mData[i];
    }

    else if (comp(mData[i], result))
      {
        result = mData[i];
      }
      count++;
    }
  }
  return result;
}

#endif
