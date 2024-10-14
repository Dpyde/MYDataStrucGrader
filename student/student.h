#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include <map>
#include <algorithm>
template <typename T>
void CP::vector<T>::uniq(std::vector<CP::vector<T>::iterator> itrs)
{ sort(itrs.begin(),itrs.end());
  std::map<T,CP::vector<T>::iterator> res;
  auto it=itrs.begin();
  CP::vector<T> out;
  for (auto i = begin(); i < end(); i++)
  {
  if (i==*it){
    if(res[*(*it)]!=0)
      out.push_back(*(*it));
    
  }it++;

  }
  auto it2=res.find(1);
  

}

#endif
