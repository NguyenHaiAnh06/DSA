#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int q;
    cin >> q;
    while (q--)
    {
        int dem = 0;
        int left, right;
        cin >> left >> right;
        dem = upper_bound(vec.begin(), vec.end(), right) - lower_bound(vec.begin(), vec.end(), left);
        cout << dem << endl;
    }
    return 0;
}