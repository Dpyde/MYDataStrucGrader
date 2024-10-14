#include <iostream>
#include <queue>
#include <map>
using namespace std;

int poweroutput(map<int, int> totalpoint)
{
    return (*totalpoint.begin()).first;
}
int main()
{  ios_base::sync_with_stdio(false); cin.tie(0);
    queue<int> allstat;
    map<int, int> characterlist,totalpoint;
    int m, n, k;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        allstat.push(k);
    }
    
    for (int i = 0; i < m; i++)
    {
        characterlist[i] = 1;
        
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
        cout << poweroutput(totalpoint) << " ";
    }
}
