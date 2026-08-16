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
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
        {
            cin >> x;
        }
        priority_queue<int, vector<int>, greater<int>> qp;
        for (auto x : a)
        {
            qp.push(x);
        }
        ll ads = 0;
        while (qp.size() > 1)
        {
            ll day1 = qp.top();
            qp.pop();
            ll day2 = qp.top();
            qp.pop();
            ads += day1 + day2;
            qp.push(day1 + day2);
        }
        cout << ads << endl;
    }

    return 0;
}