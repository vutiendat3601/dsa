#include <iostream>
#define MAX_N 1000000

using namespace std;

int city[MAX_N + 1];
int n;

void solve()
{
    int min = city[1] - city[0];
    int max = city[n - 1] - city[0];
    cout << min << " " << max << endl;
    for (int i = 1; i < n - 1; i++)
    {
        int temp1 = city[i] - city[i - 1];
        int temp2 = city[i + 1] - city[i];
        min = temp1 < temp2 ? temp1 : temp2;
        temp1 = city[i] - city[0];
        temp2 = city[n - 1] - city[i];
        max = temp1 > temp2 ? temp1 : temp2;
        cout << min << " " << max << endl;
    }
    min = city[n - 1] - city[n - 2];
     max = city[n - 1] - city[0];
    cout << min << " " << max << endl;
}

int main()
{
    freopen("bai04.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> city[i];
    solve();
}