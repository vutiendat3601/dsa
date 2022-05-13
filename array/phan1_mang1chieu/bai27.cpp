#include <iostream>

using namespace std;

int t[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

void solve(int x)
{
    int sum = 0;
    int i = 0;
    while (x != 0)
    {
        sum += x / t[i];
        x %= t[i];
        i++;
    }
    cout << sum << endl;
}

int main()
{
    freopen("bai27.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        solve(x);
    }
}