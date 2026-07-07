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
int n, a[1000], okk;
int k;
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void ttsinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if (i == 0)
    {
        okk = 0; // cau hinh cuoi cung vi i duyet ve cuoi da = 0 => all bits = 1
    }
    else
    {
        a[i] = 1; // chua phai cau hinh cuoi cung nen bits = 1
    }
}
bool check()
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            count++;
        }
    }
    return count == k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    cin >> k;
    okk = 1;
    ktao();
    while (okk)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }

        ttsinh();
    }

    return 0;
}