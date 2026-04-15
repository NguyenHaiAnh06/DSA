#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, int> mp;
    mp[10] = 100;
    mp[20] = 200;
    // insert to map
    mp.insert({30, 300});

    cout << mp.size() << endl;

    // duyet map

    // for (pair<int, int> x : mp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    // duyet map thong qua auto
    for (auto lt : mp)
    {
        cout << lt.first << " " << lt.second << endl;
    }

    // count cac pt trung
    map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    for (auto check : m)
    {
        cout << check.first << " " << check.second << endl;
    }

    // cout theo thu tu
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (m[a[i]] != 0)
        {
            cout << a[i] << " " << m[a[i]] << endl;
            m[a[i]] = 0;
        }
    }

    return 0;
}