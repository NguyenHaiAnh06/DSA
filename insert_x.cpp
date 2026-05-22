#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto it = lower_bound(v.begin(), v.end(), 7);
    it--;
    cout << *it << endl;

    return 0;
}