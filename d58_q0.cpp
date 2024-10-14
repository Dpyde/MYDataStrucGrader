#include <iostream>
#include <iomanip>
#include <map>

using namespace std;
int main(int argc, char const *argv[])
{
    cout << std::fixed << std::setprecision(2);
    int N, score;
    string name;
    long long SubjectId;
    map<long long, pair<int, int>> mapsubject;
    map<string, pair<int, int>> mapteacher;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> SubjectId >> name >> score;
        mapsubject[SubjectId].first+=score;
        mapsubject[SubjectId].second+=1;
        mapteacher[name].first+=score;
        mapteacher[name].second+=1;
    }

    for (auto &&i : mapsubject)
    {
     cout<<i.first<<" "<<(i.second.first+0.0)/i.second.second<<endl;
    }
    for (auto &&i : mapteacher)
    {
        cout<<i.first<<" "<<(i.second.first+0.0)/i.second.second<<endl;
    }
    
    
}
