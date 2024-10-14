#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main()
{  ios_base::sync_with_stdio(false); cin.tie(0);
    
    int m, n, k;
    cin >> n >> m; 
    queue<int> allstat;
    map<int, int> totalpoint;
    vector<int> characterlist(m,1);
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        allstat.push(k);
    }
    totalpoint[1]=m;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (characterlist[k]<allstat.front())
        {
            totalpoint[allstat.front()]++;
            totalpoint[characterlist[k]]--;
            if (totalpoint[characterlist[k]]==0)
            {totalpoint.erase(characterlist[k]);
            }

            characterlist[k] = allstat.front();
        }
        allstat.pop();
        
        cout << (*totalpoint.begin()).first<< " ";
    }
    return 0;
}
