#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
auto begin =&(mData[0]) ;
if (it-begin<size() && it-begin>=0)
{
return true;
}
return false;
}



#endif
