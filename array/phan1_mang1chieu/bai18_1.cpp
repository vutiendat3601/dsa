#include <iostream>

#define MAX_N 100

int nums[MAX_N + 1];
int n, k, b;

using namespace std;

void solve()
{
    int max = k;
    int count = 0;
    for (int i = 1; i <= k; i++)
    {
        if (nums[i])
            count++;
    }
    for (int i = 0; i <= n - k; i++)
    {
        if (nums[i])
            count--;
        if (nums[i + k])
            count++;
        if (count < max)
            max = count;
    }
    cout << max << endl;
}

int main()
{
    freopen("bai18_1.txt", "r", stdin);
    cin >> n >> k >> b;
    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        nums[x] = 1;
    }
    solve();
}