#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
template <typename T>
T &CP::vector_no_move<T>::operator[](int idx)
{
  int choose = 0;
  int channel = 0;
  auto it = upper_bound(aux.begin(), aux.end(), idx);
  if (it!=aux.begin())
  {
    idx -= *it;
  }

  channel = it - aux.begin();
  return mData[channel-1][idx-1];

}

template <typename T>
void CP::vector_no_move<T>::expand_hook()
{
  aux.push_back(mSize);
}

#endif
