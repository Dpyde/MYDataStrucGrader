#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m)
{
  if (m <= 0)
  {
    //::cout<<"case1";
    return false;
  }
  if (a > this->end() || b > this->end() || a + m > this->end() || b + m > this->end())
  {
    // std::cout<<"case2";
    return false;
  }
  if(a<this->begin()||b<this->begin()){
    return false;
  }
  if (a + m > b && b + m > a)
  { // std::cout<<"Case3";
    return false;
  }

  for (size_t i = 0; i < m; i++)
  {
    std::swap(*a, *b);
    a++;
    b++;
    // std::cout<<"looped";
  }
  return true;
}

#endif