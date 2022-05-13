#include <iostream>

#define MAX_N 1000000

int nums[MAX_N + 1];
int res[MAX_N + 1];
int n, k;

using namespace std;

void solve1()
{
    int max = 0;
    int start = 0;
    for (int i = 0; i < n - k + 1; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
            sum += nums[j];
        if (sum >= max)
        {
            start = i;
            max = sum;
        }
    }
    cout << max << endl;
    for (int i = start; i < start + k; i++)
        cout << nums[i] << " ";
    cout << endl;
}

void solve2()
{
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += nums[i];
    int max = 0;
    int start = 0;
    for (int i = 0; i < n - k; i++)
    {
        sum = sum - nums[i] + nums[i + k];
        if (sum >= max)
            start = i;
    }
    cout << max << endl;
    for (int i = 0; i < k; i++)
        cout << nums[start + i] << " ";
    cout << endl;
}

int main()
{
    freopen("bai18.txt", "r", stdin);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve1();
}