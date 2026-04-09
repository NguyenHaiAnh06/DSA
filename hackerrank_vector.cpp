#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vc;

    for (int i = 0; i < n; i++)
    {
        int check;
        cin >> check;

        if (check == 1)
        {
            int x;
            cin >> x;
            vc.push_back(x);
        }
        else if (check == 2)
        {
            if (!vc.empty())
            {
                vc.pop_back();
            }
        }
    }

    if (vc.empty())
    {
        cout << "EMPTY\n";
    }
    else
    {
        for (auto a : vc)
        {
            cout << a << " ";
        }
    }
}