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

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
char a[1005][1005];
int n, m;

void nhap()
{
    cin >> n >> m;
    // cin.ignore(1);
    FOR2_1(i, j, n, m)
    {
        cin >> a[i][j];
    }
}

void loang(int i, int j)
{
    a[i][j] = '#';
    for (int k = 0; k < 4; k++)
    {
        int t1 = i + dx[k], t2 = j + dy[k];
        if (t1 >= 1 && t1 <= n && t2 >= 1 && t2 <= m)
        {
            if (a[t1][t2] == '.')
            {
                loang(t1, t2);
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
        if (a[i][j] == '.')
        {
            dem++;
            loang(i, j);
        }
    }
    cout << dem << endl;

    return 0;
}