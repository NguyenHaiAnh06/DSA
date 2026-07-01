#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <numeric>
#include <iomanip>
#include <limits>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // truy van left - right
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll f[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            f[i] = v[i];
        }
        else
        {
            f[i] = f[i - 1] + v[i];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int left, right;
        cin >> left >> right;
        left--;
        right--; // theo de bai y/c
        if (left == 0)
        {
            cout << f[right];
        }
        else
        {
            cout << f[right] - f[left - 1];
        }
    }

    return 0;
}