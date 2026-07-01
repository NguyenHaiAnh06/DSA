#include <iostream>
#include <string>
#include <vector>

using namespace std;

void nhap_xuat(int n, vector<string> s)
{
    string x;
    for (int i = 0; i < n; i++)
    {
        getline(cin, x);
        s.push_back(x);
    }
    //  output
    for (auto b : s)
    {
        cout << b << " " << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    cin.ignore(1);
    vector<string> s;
    nhap_xuat(n, s);
    return 0;
}