#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B)
{
    vector<T> v, a;
    v = A;
    a=A;
    sort(a.begin(), a.end());

    for (auto &&i : B)
    {
        auto it = lower_bound(a.begin(), a.end(), i);
        if (it==a.begin())
        {
            if (i!=*(a.begin()))
            {
            v.push_back(i);
            }
            
        }
        else if ((it == a.end()) || ((*it) != i) )
        {
            v.push_back(i);
        }
    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B)
{
    vector<T> v, b;
    b=B;
    sort(b.begin(), b.end());

    for (auto &&i : A)
    {
        auto it = lower_bound(b.begin(), b.end(), i);
        if (it==b.begin())
        {
            if (i==*(b.begin()))
            {
            v.push_back(i);
            }
            
        }
        else if ( it!=b.end()&&(*it) == i )
        {
            v.push_back(i);
        }
    }

    return v;
}
