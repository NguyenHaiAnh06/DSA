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
int n, ok;
char a[1005];
void khtao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 'A';
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 'C')
    {
        a[i] = 'A';
        i--;
    }
    if (i == 0) // cau hinh cuoi cung
    {
        ok = 0;
    }
    else // chua phai thi tang cau hinh
    {
        a[i]++;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    ok = 1;
    khtao();
    while (ok)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }

    return 0;
}