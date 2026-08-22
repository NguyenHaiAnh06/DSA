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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[1001];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += a[i];
        }
        ll res = sum, index = 0;
        for (int i = k; i < n; i++)
        {
            // theo logic
            sum = sum - a[i - k] + a[i];
            if (sum > res)
            {
                res = sum;
                index = i - k + 1;
            }
        }
        cout << res << endl;
        for (int j = 0; j < k; j++)
        {
            cout << a[index + j] << " ";
        }
    }

    return 0;
}