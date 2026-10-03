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

using ll = long long;
using namespace std;

int main()
{
    int n, S;
    cin >> n >> S;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int soTo = S / a[i];
        S = S % a[i];

        cnt += soTo;
    }

    cout << cnt;

    return 0;
}