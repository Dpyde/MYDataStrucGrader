#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
this->ensureCapacity(mSize+1);
for (size_t i = 0; i < pos; i++)
{
  mData[size()-i]=mData[size()-i-1];
}

mData[size()-pos]=value;
mSize++;
}

#endif
