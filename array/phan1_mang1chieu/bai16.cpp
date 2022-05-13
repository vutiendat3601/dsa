#include <iostream>
#define MAX_N 100000
#define MAX 1000000

using namespace std;

int nums[MAX_N + 1];
int sums[MAX_N + 1];
int n;

int max(int x, int y)
{
    return x > y ? x : y;
}

void calSums()
{
    sums[0] = nums[0];
    for (int i = 1; i < n; i++)
        sums[i] = sums[i - 1] + nums[i];
}

int solve(int l, int r)
{
    int preSum = 0;
    if (l > 0)
        preSum = sums[l - 1];
    return sums[r] - preSum;
}

int main()
{
    freopen("bai16.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    calSums();
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int res = solve(l - 1, r - 1);
        cout << res << endl;
    }
}