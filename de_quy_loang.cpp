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

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int a[1005][1005];
int n, m;
void nhap_dl()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}
void loang(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k], i2 = j + dy[k];
        if (i1 >= 0 && i1 < n && i2 >= 0 && i2 < m)
        {
            if (a[i1][i2])
            {
                loang(i1, i2);
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int dem = 0;
    nhap_dl();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                dem++;
                loang(i, j);
            }
        }
    }
    cout << dem << endl;

    return 0;
}