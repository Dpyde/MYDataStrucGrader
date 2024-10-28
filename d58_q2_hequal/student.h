#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  priority_queue<T,comp> temp;
  priority_queue<T,comp> temp1;
  temp=other;
  temp1=this;
  while ((!temp1.empty())&&(!temp.empty()))
  {
    if (temp.size()!=temp1.size())
    {
      return false;
    }
    
    if (temp1.top()!=temp.top())
    {
      return false;
    }
   return true; 
  }
  
  return true; 
}

#endif
