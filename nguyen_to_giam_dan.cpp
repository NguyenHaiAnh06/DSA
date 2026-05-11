#include <iostream>
#include <algorithm>

using namespace std;

int nt(int a)
{
    int count = 0;
    while (a != 0)
    {
        int r = a % 10;
        if (r == 2 || r == 3 || r == 5 || r == 7)
        {
            ++count;
        }
        a /= 10;
    }
    return count;
}
bool compare(int a, int b)
{
    return nt(a) < nt(b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    stable_sort(a, a + n, compare);
    for (auto it : a)
    {
        cout << it << ' ';
    }

    return 0;
}