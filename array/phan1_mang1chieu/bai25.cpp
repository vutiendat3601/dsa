#include <iostream>
#define MAX_N 100
#define MAX 30000

using namespace std;
int nums[MAX_N + 1];
int counts[MAX + 1];
int n;

void reset()
{
    for (int i = 0; i <= MAX; i++)
        counts[i] = 0;
}

void solve()
{
    reset();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        counts[nums[i]]++;
    }
    int max = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (counts[i] > max)
            max = counts[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (counts[nums[i]] == max)
        {
            counts[nums[i]]=0;
            cout << nums[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    freopen("bai25.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        solve();
    }
}