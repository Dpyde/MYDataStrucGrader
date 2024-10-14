#include <iostream>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{   std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n, m, j, k;
    cin >> n >> m;
    set<pair<int, int>> spi;
    for (size_t i = 0; i < n; i++)
    {
        cin >> j >> k;
        spi.insert({j, k});
    }
    for (size_t i = 0; i < m; i++)
    {
        cin >> j >> k;

        if (spi.upper_bound({j, k})==(spi.begin()) )

        {
           
            cout << -1 << " " << -1 << " ";
        }
        else if( (*(spi.lower_bound({j, k}))).first == j &&(*(spi.lower_bound({j, k}))).second   == k)
        {
               
            cout << 0 << " " << 0 << " ";
        }
        else
        {               
            
                auto it=(spi.upper_bound({j, k}))    ;           
it--;
            cout << (*it).first << " "<<(*it).second<<" ";

        }
    }

    return 0;
}
