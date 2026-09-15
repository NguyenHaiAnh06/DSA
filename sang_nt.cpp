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
ll n;
void solve()
{
    vector<ll> v(n + 1, 1);
    for (int i = 0; i < n; i++)
    {
        v[i] = 1;
    }
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (v[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                v[j] = 0;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}