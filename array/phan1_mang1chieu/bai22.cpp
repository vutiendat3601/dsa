#include <iostream>
#define MAX_N 1000000
#define MAX 1000000

int nums1[MAX_N];
int nums2[MAX_N];
int e1[MAX_N + 1];
int e2[MAX_N + 1];

using namespace std;

void reset()
{
    for (int i = 0; i <= MAX; i++)
        e1[i] = 0;
}

void giao(int n1, int n2)
{
    reset();
    for (int i = 0; i < n1; i++)
        e1[nums1[i]]++;
    for (int i = 0; i < n2; i++)
    {
        if (e1[nums2[i]])
        {
            cout << nums2[i] << " ";
            e1[nums2[i]] = 0;
        }
    }
    cout << endl;
}

void hop(int n1, int n2)
{
    reset();
    for (int i = 0; i < n1; i++)
    {
        if (!e1[nums1[i]])
        {
            cout << nums1[i] << " ";
            e1[nums1[i]]++;
        }
    }
    for (int i = 0; i < n2; i++)
    {
        if (!e1[nums2[i]])
        {
            cout << nums2[i] << " ";
            e1[nums2[i]]++;
        }
    }
    cout << endl;
}

int main()
{
    freopen("bai22.txt", "r", stdin);
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];
    giao(n1, n2);
    hop(n1, n2);
}