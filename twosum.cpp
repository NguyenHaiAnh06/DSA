#include <iostream>
using namespace std;
// do phuc tap 0(n^2)
// tim 2 so trung nhau trong mang
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int taget;
    cin >> taget;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] + a[i] == taget)
            {
                cout << "[" << i << " " << j << "]" << " ";
            }
        }
    }
    return 0;
}