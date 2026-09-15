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

int solve(vector<ll> v, int x)
{
    auto check1 = lower_bound(v.begin(), v.end(), x);
    auto check2 = upper_bound(v.begin(), v.end(), x);
    if (*check1 >= x && *check2 > x)
    {
        return *check1, *check2;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int x;
    cin >> x;
    pair<int, int> pii;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    // while (q--)
    // {
    //     int check = solve(v, x);
    //     pii.push_back(check.first)
    // }

    return 0;
}