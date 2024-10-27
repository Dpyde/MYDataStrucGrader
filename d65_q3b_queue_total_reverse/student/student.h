#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse()
{
  aux = !aux;
}

template <typename T>
const T &CP::queue<T>::front() const
{
  // You MAY need to edit this function
  if (aux)
  {
    return mData[(mFront + mSize - 1) % mCap];
  }

  else
  {
    return mData[mFront];
  }
}

template <typename T>
const T &CP::queue<T>::back() const
{
  // You MAY need to edit this function
  if (aux)
  {
    return mData[mFront];
  }
  else
  {
    return mData[(mFront + mSize - 1) % mCap];
  }
}

template <typename T>
void CP::queue<T>::push(const T &element)
{
  // You MAY need to edit this function
  if (aux)
  {
    ensureCapacity(mSize + 1);
    mData[(mFront - 1 + mCap) % mCap] = element;
    mFront = (mFront - 1 + mCap) % mCap;
    mSize++;
  }
  else
  {
    ensureCapacity(mSize + 1);
    mData[(mFront + mSize) % mCap] = element;
    mSize++;
  }
}

template <typename T>
void CP::queue<T>::pop()
{
  // You MAY need to edit this function
  if (aux)
  {
    mSize--;
  }
  else
  {
    mFront = (mFront + 1) % mCap;
    mSize--;
  }
}

#endif