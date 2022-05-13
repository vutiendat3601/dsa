#include <iostream>
#define MAX_N 1000000

int nums1[MAX_N];
int nums2[MAX_N];
int nums[MAX_N + MAX_N];

using namespace std;

void merge(int *nums1, int n1, int *nums2, int n2)
{
    int n = n1 + n2;
    int count, i, j;
    count = i = j = 0;
    while (i < n1 && j < n2)
    {
        if (nums1[i] < nums2[j])
            nums[count++] = nums1[i++];
        else
            nums[count++] = nums2[j++];
    }
    while (i < n1)
        nums[count++] = nums1[i++];
    while (j < n2)
        nums[count++] = nums2[j++];
    for (int i = 0; i < n1 + n2; i++)
        cout << nums[i] << " ";
    cout << endl;
}

int main()
{
    freopen("bai20.txt", "r", stdin);
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];
    merge(nums1, n1, nums2, n2);
}