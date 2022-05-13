#include <iostream>
#define MAX_N 5000

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

int solve()
{
    for (int i = 0; i < n; i++)
        nums[i] *= nums[i];
    qSort(nums, 0, n - 1);
    for (int i = n - 1; i > 1; i--)
    {
        int left = 0;
        int right = i - 1;
        while (left < right)
        {
            if (nums[left] + nums[right] == nums[i])
                return 1;
            if (nums[left] + nums[right] > nums[i])
                right--;
            else if (nums[left] + nums[right] < nums[i])
                left++;
        }
    }
    return 0;
}

main()
{
    freopen("bai30.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        int res = solve();
        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}