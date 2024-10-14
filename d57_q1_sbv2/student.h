#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const
{
  return this->v.size();
}

template <typename T>
const T &CP::stack<T>::top() const
{
  return this->v.back();
}

template <typename T>
void CP::stack<T>::push(const T &element)
{
  this->v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop()
{
  this->v.pop_back();
}

template <typename T>
void CP::stack<T>::deep_push(const T &element, int depth)
{
  this->v.insert(this->v.end() - (std::min(depth, static_cast<int>(size()))),element);
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w)
{
  for (auto &&i : w)
  {
    this->v.push_back(i);
  }
}

template <typename T>
void CP::stack<T>::pop_until(const T &e)
{
  while (this->top() != e && size() > 0)
  {
    this->pop();
  }
}

#endif
