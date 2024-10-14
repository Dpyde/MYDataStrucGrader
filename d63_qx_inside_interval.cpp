#include <iostream>
#include <set>

using namespace std;

int calculate(set<pair<int, int>> sp, int s)
{

    if (s < (*sp.begin()).first)
    {
        // cout << "first case";
        return 0;
    }
    if (s > (*prev(sp.end())).second)
    {
        // cout << "second case";
        return 0;
    }
    auto it = sp.upper_bound({s, -0});

    cout<< (*it).first << (*it).second<<"<-";
    if ((*it).first <= s && s<= (*it).second)
    { 
        return 1;
    }
    return 0;
}

int main()
{
    int n, m, s, e;

    // std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    set<pair<int, int>> sp;
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        cin >> s >> e;
        sp.insert({s, e});
    }

    for (size_t i = 0; i < m; i++)
    {
        cin >> s;
        cout << calculate(sp, s);
    }
}
