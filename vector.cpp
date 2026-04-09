#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // vector
    vector<int> v(3, 1);
    v.push_back(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    char p;
    cout << endl
         << "rage base for loop: " << p << endl;
    // rage base for loop
    int a[5] = {1, 2, 3, 4, 5};
    for (int x : a)
    {
        cout << x << ' ';
    }
    cout << endl
         << "iterator: " << p << endl;
    // iterator
    vector<int>::iterator cp = v.begin();
    cout << *cp << endl;
    // duyet phan tu iterator
    cout << endl
         << "Duyet phan tu iterator: " << p << endl;
    for (cp = v.begin(); cp != v.end(); cp++)
    {
        cout << *cp << ' ';
    }

    int n;
    cin >> n;
    vector<int> it(n);
    for (int i = 0; i < n; i++)
    {
        cin >> it[i];
    }
    // do phuc tap 0(n)
    it.insert(it.begin() + 2, 100);
    for (int x : it)
    {
        cout << x << ' ';
    }

    return 0;
}