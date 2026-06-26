// cac ham : insert , size , length , erase(index)
// find(gia tri) tra ve string::npos neu ko co trong xau
// co the duyet = interration or forech
#include <iostream>
using namespace std;
void inhoa(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
}
int main()
{
    int n;
    cin >> n;
    cin.ignore(1); // xoa di 1 ki tu sau lenh nhap
    // khai bao string
    string s;
    getline(cin, s);
    cout << s.size() << endl;
    if (s.find("h") != string::npos)
    {
        cout << s.find("h");
    }
    else
    {
        cout << "Not found\n";
    }

    return 0;
}