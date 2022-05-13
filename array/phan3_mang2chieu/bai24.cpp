#include <iostream>
#define MAX 100

using namespace std;

int nums[MAX][MAX];
int n, m;

void swap(int r, int i, int j)
{
    int temp = nums[r][i];
    nums[r][i] = nums[r][j];
    nums[r][j] = temp;
}

void qSort(int r, int left, int right)
{
    if (left < right)
    {
        int i = left - 1;
        int j = left;
        while (j < right)
        {
            if (nums[r][j] < nums[r][right])
            {
                i++;
                swap(r, i, j);
            }
            j++;
        }
        i++;
        swap(r, i, right);
        qSort(r, left, i - 1);
        qSort(r, i + 1, right);
    }
}

void solve()
{
    for (int i = 0; i < n; i++)
        qSort(i, 0, m - 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << nums[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    freopen("bai24.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums[i][j];
    }
    solve();
}