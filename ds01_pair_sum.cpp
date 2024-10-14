#include <iostream>
#include <vector>
int main(int argc, char const *argv[])
{
    int n, m, c;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        v.push_back(c);
    }
    sort(v.start(),v.end());
    for (int i = 0; i < m; i++)
    {
    }
}

// #include <iostream>
// #include <algorithm>
// using namespace std;

// string arrayAddition(int a[], int size, int x){
//     sort(a, a+size);
//     int left = 0;
//     int right = size-1;
//     int sum;

//     while (left < right) {
//         sum = a[left] + a[right];
//         if (sum == x) {
//             return "YES";
//         }
//         else if (sum < x)
//         {
//             left++;
//         }
//         else {
//             right--;
//         }
//     }
//     return "NO";
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     int A[n];

//     for (int i = 0; i<n; i++) {
//         int c;
//         cin >> c;
//         A[i] = c;
//     }

//     for (int i = 0; i<m; i++) {
//         int c;
//         cin >> c;
//         cout << arrayAddition(A, n, c) << endl;
//     }
// }