#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp;
    string word;
    map<string,int> mp;
    for (int i = 0; i < n; i++)
    {cin>>word;
            mp[word]++;
    }
    for (auto &&i : mp)
    {
        if (i.second>=temp)
        {
            word=i.first;
            temp=i.second;
        }
         
    }
}
