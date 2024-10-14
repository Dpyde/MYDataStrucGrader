#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,temp;
    cin>> n>>m;

    vector<int> vn,vm,result;
for (int i = 0; i < n; i++)
{   cin>> temp;
    vn.push_back(temp);

}
for (int i = 0; i < m; i++)
{   
    cin>>temp;
    vm.push_back(temp);
}
sort(vn.begin(),vn.end());
sort(vm.begin(),vm.end());
for (auto &&i : vn)
{
    if (find(vm.begin(),vm.end(),i)!=vm.end()&& find(result.begin(),result.end(),i)==result.end())
    {
        result.push_back(i);
    }
}
for (auto &&i : result)
{
    cout<<i<<' ';
}



    

}
