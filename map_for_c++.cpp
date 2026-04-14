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
    return 0;
}