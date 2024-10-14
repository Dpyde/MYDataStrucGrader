#include <iostream>
#include <map>
#include <set>
using namespace std;

main(int argc, char const *argv[])
{  
    // std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m, a, b, k,COMMAND;
    map<int, int> st;      // productid_number
    map<int, set<int>> mp; // number_product_id
    cin>>n>>m;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a;
        st.insert({a, 0});
        mp[0].insert(a);
    }
    for (size_t i = 0; i < m; i++)
    {
        cin >> COMMAND;
        if (COMMAND == 1)
        {
            cin >> a >> b;
            if (st.find(a) != st.end())
            {
                mp[st[a]].erase(a);
                if (mp[st[a]].empty())
                {
                    mp.erase(st[a]);
                }
                
                st[a] += b;
                mp[st[a]].insert(a);
            }
        }
        else if (COMMAND == 2)
        {   
        //     for (auto &&dawd : mp)
        // {
        //     dawd.first<<" "<<dawd.second
        // }
        
            cin>>k;
            if (k==(*(mp.begin())).first||(*(--mp.lower_bound(k))).first==0)
            {
                cout<<"NONE"<<endl;
            }
            else{
            cout<< (*--((*(--mp.lower_bound(k))).second.end()))<<" ";   
        }
        }
    }

    return 0;
}
