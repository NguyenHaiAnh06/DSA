#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vec[i] + vec[j] == k)
            {

                cout << i << " " << j << endl;
                break;
            }
        }
    }
    return 0;
}