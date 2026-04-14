#include <iostream>
#include <vector>
#include <set>

using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto x : s)
    {
        cout << x << ' ';
    }
    // dung iterator voi set
    for (auto b = s.rbegin(); b != s.rend(); b++)
    {
        cout << "    " << *b << ' ';
    }
    cout << *s.find(3) << endl;
    // find ( tim kiem 3 trong set neu co thi nhu code!)
    if (s.find(3) != s.end())
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "Don't" << endl;
    }

    return 0;
}