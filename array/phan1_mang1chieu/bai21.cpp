#include <iostream>
#define MAX_N 1000000

int nums1[MAX_N];
int nums2[MAX_N];
int e[MAX_N];

using namespace std;

void hop(int n1, int n2)
{
    int i, j;
    i = j = 0;
    while (i < n1 && j < n2)
    {
        if (nums1[i] == nums2[j])
        {
            cout << nums1[i] << " ";
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j])
            i++;
        else if (nums1[i] > nums2[j])
            j++;
    }
    while (i < n1)
        cout << nums1[i++] << " ";
    while (j < n2)
        cout << nums2[j++] << " ";
    cout << endl;
}

void giao(int n1, int n2)
{
    int i, j;
    i = j = 0;
    while (i < n1 && j < n2)
    {
        if (nums1[i] == nums2[j])
        {
            cout << nums1[i] << " ";
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j])
            i++;
        else if (nums1[i] > nums2[j])
            j++;
    }
    cout << endl;
}

int main()
{
    freopen("bai21.txt", "r", stdin);
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];
    hop(n1, n2);
    giao(n1,n2);
}