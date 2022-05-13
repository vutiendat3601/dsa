#include <iostream>

using namespace std;

int main()
{
    freopen("bai28.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        int chan = 0;
        int le = 0;
        int n = 0;
        int x;
        cin >> x;
        while (x != -1)
        {
            n++;
            if (x % 2 == 0)
                chan++;
            else
                le++;
            cin >> x;
        }
        if (n % 2 == 0 && chan > le)
            cout << "YES" << endl;
        else if (n % 2 != 0 && le > chan)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}