#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m, k, in;
    vector<int>::iterator itlow, itup;

    vector<int> sn;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        sn.push_back(in);
    }

    // for (auto &&i : sn)
    // {
    //     cout<<i<<"<-";
    // }

    sort(sn.begin(), sn.end());

    for (int i = 0; i < m; i++)
    {
        cin >> in;

        itlow = lower_bound(sn.begin(), sn.end(), in - k);

        itup = upper_bound(sn.begin(), sn.end(), in + k);

        cout << itup - itlow<<" ";
    }
}
