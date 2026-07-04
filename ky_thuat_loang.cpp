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

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int n;
    // cin >> n;
    int row, col;
    cin >> row >> col;
    vector<vector<int>> a(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            bool check = true;
            for (int k = 0; k < 8; k++)
            {
                int i1 = i + dx[k], j1 = j + dy[k];
                if (i1 >= 0 && i1 < row && j1 >= 0 && j1 < col)
                {
                    if (a[i1][j1] >= a[i][j])
                    {
                        check = false;
                        break;
                    }
                }
            }
            if (check == true)
            {
                dem++;
            }
        }
    }
    cout << dem << endl;
    return 0;
}