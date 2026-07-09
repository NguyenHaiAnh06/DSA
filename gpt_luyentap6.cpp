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

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m;
int a[1005][1005];
void nhap()
{
    cin >> n >> m;
    FOR2_1(i, j, n, m)
    {
        cin >> a[i][j];
    }
}
void ktloang(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k], i2 = j + dy[k];
        if (i1 >= 1 && i1 <= n && i2 >= 1 && i2 <= n)
        {
            if (a[i1][i2])
            {
                ktloang(i1, i2);
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    nhap();
    int dem = 0;
    FOR2_1(i, j, n, m)
    {
        if (a[i][j] == 1)
        {
            dem++;
            ktloang(i, j);
        }
    }
    cout << dem << endl;

    return 0;
}