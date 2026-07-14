#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    if (n == 2)
    {
        if (p[1] == 1 && p[2] == 2)
        {
            cout << 0 << "\n\n";
        }
        else
        {
            cout << -1 << "\n";
        }
        return;
    }

    vector<int> ans;
    auto apply_op = [&](int i)
    {
        ans.push_back(i);
        int val_i = p[i];
        int val_next = p[i + 1];

        p.erase(p.begin() + i + 1);
        p.erase(p.begin() + i);
        p.insert(p.begin() + 1, val_i);
        p.push_back(val_next);
    };

    for (int target = n; target >= 2; target--)
    {
        int pos = -1;
        for (int i = 1; i <= n; i++)
        {
            if (p[i] == target)
            {
                pos = i;
                break;
            }
        }

        if (pos == target)
        {
            continue;
        }
        if (pos == 1)
        {
            apply_op(1);
        }

        for (int i = 1; i <= n; i++)
        {
            if (p[i] == target)
            {
                pos = i;
                break;
            }
        }

        while (pos != target)
        {
            if (pos == n)
            {

                apply_op(1);
            }
            else
            {
                if (pos > 1)
                {
                    apply_op(pos - 1);
                }
                else
                {
                    apply_op(1);
                }
            }

            for (int i = 1; i <= n; i++)
            {
                if (p[i] == target)
                {
                    pos = i;
                    break;
                }
            }
        }
    }

    cout << ans.size() << "\n";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
    // sd code
}