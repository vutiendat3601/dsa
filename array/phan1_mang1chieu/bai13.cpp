#include <iostream>
#define MAX_N 1000

using namespace std;

int nums[MAX_N + 1];
int counts[MAX_N + 1];
int n;

void solve()
{
    int count = 0;
    int max = 1;
    int res = -1;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] == nums[i])
                count++;
        }
        if (count > max)
        {
            res = nums[i];
            max = count;
        }
    }
    cout << res << " " << max << endl;
}

int main()
{
    freopen("bai13.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve();
}