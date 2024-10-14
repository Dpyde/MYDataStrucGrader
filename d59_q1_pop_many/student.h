#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  for (size_t i = 0; i < std::min(K,mSize); i++)
  {
    this->pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  std::stack<T>  res;
  auto start =mSize-std::min(K,mSize);
  for (size_t i = 0; i < std::min(K,mSize)+1; i++)
  {
    res.push(mData[start]);
    start++;
    this->mSize-=1;
  }
return res;
}

#endif
