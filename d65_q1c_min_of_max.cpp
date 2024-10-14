#include <iostream>
#include <queue>
#include <map>
#include <climits>
using namespace std;

int poweroutput(map<int, int> characterlist)
{
    int result;
    result = INT_MAX;
    for (auto &&i : characterlist)
    {
        result = min(result, i.second);
    }
    if (result < 1)
    {
        result = 1;
    }

    return result;
}
int main()
{  ios_base::sync_with_stdio(false); cin.tie(0);
    queue<int> allstat;
    map<int, int> characterlist;
    int m, n, k;
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        cin >> k;
        allstat.push(k);
    }
    for (size_t i = 0; i < m; i++)
    {
        characterlist[i] = 1;
    }

    for (size_t i = 0; i < n; i++)
    {
        cin >> k;
        if (characterlist.find(k) == characterlist.end())
        {
            characterlist[k] = allstat.front();
        }
        else
        {
            characterlist[k] = (max(characterlist[k], allstat.front()));
        }

        

        allstat.pop();
        cout << poweroutput(characterlist) << " ";

    }
}
