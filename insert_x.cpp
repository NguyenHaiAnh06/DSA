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
    int index = it - v.begin();
    cout << index << endl;

    return 0;
}