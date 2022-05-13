#include <iostream>
#define MAX_N 10000
#define MAX 1000000

using namespace std;

int nums[MAX_N + 1];
int counts[MAX + 1] = {0};
int n;

void reset()
{
    for (int i = 0; i <= MAX; i++)
        counts[i] = 0;
}

void solve()
{
    reset();
    for (int i = 0; i < n; i++)
    {
        if (counts[nums[i]])
        {
            cout << nums[i] << endl;
            return;
        }
        else
            counts[nums[i]]++;
    }
    cout << "-1" << endl;
}

int main()
{
    freopen("bai19.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i <= MAX_N; i++)
            nums[i] = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        solve();
    }
}