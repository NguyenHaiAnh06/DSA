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
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (int &x : a)
    {
        cin >> x;
    }
    for (int &x : b)
    {
        cin >> x;
    }
    int left = 0;
    int right = 0;
    while (left < n && right < m)
    {
        if (a[left] <= b[right])
        {
            cout << a[left] << " ";
            left++;
        }
        else
        {
            cout << b[right] << " ";
            right++;
        }
    }
    while (left < n)
    {
        cout << a[left] << " ";
        left++;
    }
    while (right < m)
    {
        cout << b[right] << " ";
        right++;
    }

    return 0;
}