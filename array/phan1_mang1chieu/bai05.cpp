#include <iostream>
#define MAX_N 1000000

using namespace std;

int money[MAX_N + 1];
int n;

void solve()
{
    int t25 = 0;
    int t50 = 0;
    for (int i = 0; i < n; i++)
    {
        if (money[i] == 100)
        {
            if (t25 > 0 && t50 > 0)
            {
                t25--;
                t50--;
            }
            else if (t25 >= 3)
                t25 -= 3;
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        if (money[i] == 50)
        {
            if (t25 < 1)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                t50++;
                t25--;
            }
        }
        if (money[i] == 25)
            t25++;
    }
    cout << "YES";
}

int main()
{
    freopen("bai05.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> money[i];
    solve();
}