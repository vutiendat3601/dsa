#include <iostream>
#define MAX_N 1000

using namespace std;

int n;

void swap(int nums[], int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void qSort(int nums[], int left, int right)
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

void solve(int *nums1, int *nums2, int n)
{
    for (int i = 0; i < n; i++)
        cout << nums1[i] << " " << nums2[n - 1 - i] << " ";
    cout << endl;
}

int main()
{
    int nums1[MAX_N + 1];
    int nums2[MAX_N + 1];
    freopen("bai26.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> nums1[i];
        for (int i = 0; i < n; i++)
            cin >> nums2[i];
        qSort(nums1, 0, n - 1);
        qSort(nums2, 0, n - 1);
        solve(nums1,nums2,n);
    }
}