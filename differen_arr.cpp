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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll d[n + 5];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            d[0] = v[0];
        }
        else
        {
            d[i] = v[i] - v[i - 1];
        }
    }
    int k;
    while (q--)
    {
        int left, right;
        cin >> left >> right;
        cin >> k;
        d[left] += k;
        d[right + 1] -= k;
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += d[i];
        cout << sum << ' ';
    }

    return 0;
}