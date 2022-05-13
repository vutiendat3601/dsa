#include <iostream>
#define MAX_N 100000
// // #define MAX 999999999

using namespace std;

long long nums[MAX_N + 1];
// long long counts[MAX + 1];
int n;

struct number
{
    int val;
    int numberOf;
};

number a[MAX_N + 1];

void swap(number *nums, int i, int j)
{
    number temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void qSort(number *nums, int left, int right)
{
    if (left < right)
    {
        int i = left - 1;
        int j = left;
        while (j < right)
        {
            if (nums[j].numberOf > nums[right].numberOf)
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

int findInNumber(int x, int numberOf)
{
    for (int i = 0; i < numberOf; i++)
    {
        if (a[i].val == x)
            return i;
    }
    return -1;
}

int check(int x)
{
    while (x > 9)
    {
        int r = x % 10;
        if (r < x / 10 % 10)
            return 0;
        x /= 10;
    }
    return 1;
}

void solve()
{
    int numberOf = 0;
    for (int i = 0; i < n; i++)
    {
        if (check(nums[i]))
        {
            int pos = findInNumber(nums[i], numberOf);
            if (pos == -1)
            {
                a[numberOf].val = nums[i];
                a[numberOf].numberOf = 1;
                numberOf++;
            }
            else
                a[pos].numberOf++;
        }
    }
    qSort(a, 0, numberOf - 1);
    for (int i = 0; i < numberOf; i++)
        cout << a[i].val << " " << a[i].numberOf << endl;
}

int main()
{
    freopen("bai29.txt", "r", stdin);
    int x;
    cin >> x;
    n = 0;
    while (x != -1)
    {
        nums[n++] = x;
        cin >> x;
    }
    solve();
}