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
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j])
                swap(i, j);
        }
        printArray(count++);
    }
}

int main()
{
    freopen("bai01.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << endl;
    sort();

    cout << endl;
}