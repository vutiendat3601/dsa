#include <iostream>
#include <string>
#define MAX_N 1000

using namespace std;

string s;
int n;

void solve()
{
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '1')
        i--;
    if (i == -1)
    {
        for (i = 0; i < s.length(); i++)
            s[i] = '0';
    }
    else
    {
        s[i] = '1';
        i++;
        for (; i < s.length(); i++)
            s[i] = '0';
    }
        cout << s << endl;
    
}

int main()
{
    freopen("bai01.txt", "r", stdin);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        solve();
    }
}