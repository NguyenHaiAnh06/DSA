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
int n, a[1005], ok;

void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}

void shv()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);     // tim ra duoc thg lon hon thg n-1
        int l = i + 1, r = n; // 2 con tro
        while (l < r)
        {
            swap(a[l], a[r]);
            l++, r--;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    ktao();
    ok = 1;
    while (ok)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        cout << endl;
        shv();
    }

    return 0;
}