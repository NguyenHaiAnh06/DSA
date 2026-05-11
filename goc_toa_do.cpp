// ss 3 tieu chi
// ss qua kc a,b
// so sanh qua hoanh do , neu hoanh  do bang nhau thi sort tung do

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    ll kca = a.first * a.first + a.second * a.second;
    ll kcb = b.first * b.first + b.second * b.second;
    if (kca != kcb)
    {
        return kca < kcb;
    }
    else if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v)
    {
        cout << x.first << ' ' << x.second << endl;
    }
    return 0;
}