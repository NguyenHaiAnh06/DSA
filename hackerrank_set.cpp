#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << endl;
    int check;
    cin >> check;
    if (check == 1)
    {
        st.erase(2);
        for (auto c : st)
        {
            cout << c << ' ';
        }
    }
    else
    {
        cout << "don't erase" << endl;
    }
    return 0;
}