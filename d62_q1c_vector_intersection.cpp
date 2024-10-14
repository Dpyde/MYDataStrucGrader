#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int n,m,temp;
    cin>> n>>m;

    set<int> vn,vm,result;
for (int i = 0; i < n; i++)
{   cin>> temp;
    vn.insert(temp);
}
for (int i = 0; i < m; i++)
{   
    cin>>temp;
    vm.insert(temp);
}

for (auto &&i : vn)
{
    if (vm.find(i)!=vm.end())
    {
        result.insert(i);
    }
}
for (auto &&i : result)
{
    cout<<i<<' ';
}



    

}
