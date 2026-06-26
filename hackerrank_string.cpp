#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    int check = 0;
    if (a.size() % 2 == 0)
    {
        cout << "Not found" << endl;
    }
    else
    {
        check = a.size() / 2;
        cout << a[check] << endl;
    }

    return 0;
}