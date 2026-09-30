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

    int n;
    cin >> n;
    int a[n], b[n];
    for (int &x : a)
    {
        cin >> x;
    }
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push(i);
        }
        else
        {
            while (!st.empty() && a[st.top()] < a[i])
            {
                b[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
    }
    while (!st.empty())
    {
        b[st.top()] = -1;
        st.pop();
    }
    for (int x : b)
    {
        cout << x << " ";
    }

    return 0;
}