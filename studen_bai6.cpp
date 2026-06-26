#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int check;
    cin >> check;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    while (check--)
    {
        // if (vec[i])
        // {
        //     /* code */
        // }
    }
}