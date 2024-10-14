#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int times, temp;
    string operation;

    cin >> times;
    vector<int> v;
    for (int i = 0; i < times; i++)
    {

        cin >> operation;
        if (operation == "pb" || operation == "d")
        {
            cin >> temp;
            if (operation == "pb")
            {
                v.push_back(temp);
            }
            else
            {
                v.erase(v.begin() + temp);
            }
        }
        else
        {
            if (operation == "sa")
            {
                sort(v.begin(), v.end());
            }
            else
            {
                if (operation == "sd")
                {

                    sort(v.begin(), v.end());
                    reverse(v.begin(), v.end());
                }
                else
                {
                    if (operation == "r")
                    {
                        reverse(v.begin(), v.end());
                    }
                }
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}
