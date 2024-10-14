#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, int a, int b)
{
  vector<int> v2;
  for (int i = 0; i <= b-a; i++)
  {
    v2.push_back(v.at(i+a));
    //cout << v2.at(i);
  }
  for (int i = a; i <=b ; i++)
  {
    //cout<< v[i]<<"/"<<v2[b-i]<<endl;
    v[i]=v2[b-i];
  }
  
}
int main()
{
  // read input
  int n, a, b;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int c;
    cin >> c;
    v.push_back(c);
  }
  cin >> a >> b;
  // call function
  reverse(v, a, b);
  // display content of the vector
  for (auto &x : v)
    cout << x << " ";
  cout << endl;
}