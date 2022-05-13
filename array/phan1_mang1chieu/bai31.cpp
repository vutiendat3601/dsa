#include <iostream>
#define MAX_N 100000

using namespace std;

int nums[MAX_N];
int n;

void swap(int *nums, int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void qSort(int *nums, int left, int right)
{
    if (left < right)
    {
        int i = left - 1;
        int j = left;
        while (j < right)
        {
            if (nums[j] < nums[right])
            {
                i++;
                swap(nums, i, j);
            }
            j++;
        }
        i++;
        swap(nums, i, right);
        qSort(nums, left, i - 1);
        qSort(nums, i + 1, right);
    }
}

void solve()
{
    qSort(nums, 0, n - 1);
    int max = 1000000;
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int temp = nums[i + 1] - nums[i];
        if (temp < max)
        {
            count = 1;
            max = temp;
        }
        else if (temp == max)
            count++;
    }
    cout << max << " " << count << endl;
}

int main()
{
    freopen("bai31.txt", "r", stdin);
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