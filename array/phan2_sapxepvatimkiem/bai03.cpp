#include <iostream>
#define MAX_N 100

using namespace std;

int nums[MAX_N];
int n;

void swap(int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void printArray(int ith)
{
    cout << "Buoc " << ith << ": ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;
}
void sort()
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (nums[j] < nums[j - 1])
        {
            swap(j, j - 1);
            j--;
        }
        cout << "Buoc " << count++ << ": ";
        for (int k = 0; k <= i; k++)
            cout << nums[k] << " ";
        cout << endl;
    }
}

int main()
{
    freopen("bai03.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort();

    cout << endl;
}