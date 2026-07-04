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
    int n;
    cin >> n;
    int q;
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
        int l, r;
        cin >> l >> r;
        l--, r--;
        if (l == 0)
        {
            cout << f[r] << endl;
        }
        else
        {
            cout << f[r] - f[l - 1] << endl;
        }
    }

    return 0;
}