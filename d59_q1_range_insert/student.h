#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last)
{
  int in = last - first;
  int location = position - begin();
  this->ensureCapacity(mSize + in);
  mSize += in;
  for (int i = size(); i >= location + in; i--)
  {
    mData[i] = mData[i - in];
  }

  for (size_t i = 0; i < in; i++)
  {
    mData[location + i] = *(first + i);
  }
}

#endif
