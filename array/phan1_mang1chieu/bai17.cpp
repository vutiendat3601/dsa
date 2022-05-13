#include <iostream>

#define MAX_N 1000000

int nums[MAX_N + 1];
int n;

using namespace std;

// brute force
void solve1()
{
    int max = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum > max)
                max = sum;
        }
    }
    cout << max << endl;
}

int max(int x, int y)
{
    return x > y ? x : y;
}

void solve2()
{
    int curSum = 0;
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        curSum = max(curSum + nums[i], nums[i]);
        maxSum = max(maxSum, curSum);
    }
    cout << maxSum << endl;
}

int main()
{
    freopen("bai17.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve2();
}