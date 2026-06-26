#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?')
        {
            s[i] = ' ';
        }
    }
    string temp;
    stringstream ss(s);
    bool check = true;
    while (ss >> temp)
    {
        cout << temp << " ";
    }

    return 0;
}