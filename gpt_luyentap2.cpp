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

#define FOR2_1(i, j, row, col)       \
    for (int i = 1; i <= (row); ++i) \
        for (int j = 1; j <= (col); ++j)

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll q;
    cin >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll f[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            f[i] = a[i];
        }
        else
        {
            f[i] = f[i - 1] + a[i];
        }
    }
    while (q--)
    {
        int left, right;
        cin >> left >> right;
        left--;
        right--;
        int k;
        cin >> k;
        ll check;
        if (left == 0)
        {
            check = f[right];
        }
        else
        {
            check = f[right] - f[left - 1];
        }
        if (check > k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}