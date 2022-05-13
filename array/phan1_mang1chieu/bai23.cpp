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

int main()
{
    int nums1[MAX_N + 1];
    int nums2[MAX_N + 1];
    freopen("bai23.txt", "r", stdin);
    cin >> n;
    int k, j;
    j = k = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            nums2[j++] = x;
        else
            nums1[k++] = x;
    }
    qSort(nums2, 0, j - 1);
    qSort(nums1, 0, k - 1);
    for (int i = 0; i < j; i++)
        cout << nums2[i] << " ";
    for (int i = 0; i < k; i++)
        cout << nums1[i] << " ";
    cout << endl;
}