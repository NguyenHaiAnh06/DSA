// input 1 chuoi
//  out : tan suat xuat hien chuoi dai nhat
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    map<string, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        mp[a]++;
    }
    int max_fre = 0;
    string res;
    for (auto x : mp)
    {
        if (x.second > max_fre)
        {
            max_fre = x.second;
            res = x.first;
        }
    }
    cout << res << " " << max_fre << endl;
    return 0;
}