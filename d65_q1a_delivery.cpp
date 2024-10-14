#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int calculate(int goalin, pair<queue<int>, queue<int>> alla, int n)
{
    int goal = 0;
    int count = 0;
    while (goal < goalin && count < n && !(alla.first.empty() && alla.second.empty()))
    {
        //cout << "looped" << goal << "---";

        if ((alla.second.empty() && !alla.first.empty()) || alla.first.front() <= alla.second.front())
        {
            goal += alla.first.front();
            alla.first.pop();
        }
        else if ((alla.first.empty() && !alla.second.empty()) || alla.first.front() > alla.second.front())
        {
            goal += alla.second.front();
            alla.second.pop();
        }

        count += 1;
    }
    if (goal >= goalin)
    {
        return count;
    }
    return -1;
}

int main()
{
    int n, m, goal, count;
    int command, a, b;
    queue<long long> goals;
    pair<queue<int>, queue<int>> alla;

    cin >> n >> m;
    for (int
             i = 0;
         i < m; i++)
    {
        cin >> goal;
        goals.push(goal);
    }
    for (int i = 0; i < n; i++)
    {
        command = 0;
        a = 0;
        cin >> command;
        if (command == 1)
        {
            cin >> a >> b;
            if (a == 1)
            {
                alla.first.push(b);
            }
            if (a == 2)
            {
                alla.second.push(b);
            }
        }
        else if (command == 2)
        {
            cout << calculate(goals.front(), alla, n) << " ";
            
            goals.pop();
        }
    }

    while (!goals.empty())
    {
        
        cout << calculate(goals.front(), alla, n) << " ";
        goals.pop();
    }
}
