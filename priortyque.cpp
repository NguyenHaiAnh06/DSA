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
    int k;
    cin >> k;
    while (k--)
    {
        int t;
        cin >> t;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char x : s)
        {
            mp[x]++;
        }
        priority_queue<int> qp;
        for (auto it : mp)
        {
            qp.push(it.second);
        }
        while (t > 0)
        {
            int top = qp.top();
            qp.pop();
            top--;
            t--;
            // TH de bai cho K vuot chuoi
            qp.push(max(top, 0));
        }
        ll value = 0;
        while (!qp.empty())
        {
            value += 1ll * qp.top() * qp.top();
            qp.pop();
        }
        cout << value << endl;
    }

    return 0;
}