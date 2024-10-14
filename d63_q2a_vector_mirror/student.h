#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror()
{

    this->expand(2 * mSize);
    auto it1 = this->begin() + mSize - 1;
    auto it2 = this->begin() + mSize;
    mSize *= 2;
    while (it2 != this->end())
    {
        (*it2) = (*it1);
        it1--;
        it2++;
    }
}

#endif
