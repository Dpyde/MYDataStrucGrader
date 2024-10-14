#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m)
{
  stack<T> spreader, inserter;
  k = std::min(static_cast<int>(mSize), k);
  for (size_t i = 0; i < k; i++)
  {
    spreader.push(this->top());
    this->pop();
  }
  m=std::min(static_cast<int>(s2.mSize), m);

  for (size_t i = 0; i < m; i++)
  {
    inserter.push(s2.top());
    s2.pop();
  }
  while (!inserter.empty())
  {
    this->push(inserter.top());
    inserter.pop();
  }
  while (!spreader.empty())
  {
    this->push(spreader.top());
    spreader.pop();
  }
}
#endif
