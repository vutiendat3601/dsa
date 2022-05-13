#include <iostream>
#define MAX_N 100

using namespace std;

int nums[MAX_N];
int n, k;

void swap(int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void printArray()
{
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;
}
void sort()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (abs(k - nums[j]) > abs(k - nums[j + 1]))
                swap(j, j + 1);
        }
    }
}

int main()
{
    freopen("bai05.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        sort();
        printArray();
    }
}