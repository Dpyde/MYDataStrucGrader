#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const
{

  bool equal = true;

  for (size_t i = 0; i < this->size() || i < other.size(); i++)
  {

    if (this[i] == other[i])
    {
      continue;
    }
    else
    {
      return equal = false;
    }
  }
}

#endif
