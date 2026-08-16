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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    deque<int> q;
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && a[i] > a[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    cout << a[q.front()] << " ";
    for (int i = k; i < n; i++)
    {
        if (q.front() <= i - k)
        {
            q.pop_front();
        }
        while (!q.empty() && a[i] >= a[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
        cout << a[q.front()] << " ";
    }

    return 0;
}