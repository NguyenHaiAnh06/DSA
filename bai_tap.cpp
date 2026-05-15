#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        if (it == v.end())
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << it - v.begin() << endl;
        }
    }
    return 0;
}