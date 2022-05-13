#include <iostream>
#define MAX_N 1000

using namespace std;

int nums[MAX_N + 1];
int counts[MAX_N + 1];
int n;

void solve()
{
    for (int i = 0; i < n; i++)
        counts[nums[i]]++;
    int max = 0;
    int res = -1;
    for (int i = 0; i <= MAX_N; i++)
    {
        if (counts[i] > max)
        {
            max = counts[i];
            res = i;
        }
    }
    cout << res << " " << max << endl;
}

int main()
{
    freopen("bai12.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve();
}