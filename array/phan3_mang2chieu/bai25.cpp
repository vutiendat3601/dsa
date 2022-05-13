#include <iostream>
#define MAX 100

using namespace std;

int nums[MAX][MAX];
int n, m;

void swap(int c, int i, int j)
{
    int temp = nums[i][c];
    nums[i][c] = nums[j][c];
    nums[j][c] = temp;
}

void qSort(int c, int left, int right)
{
    if (left < right)
    {
        int i = left - 1;
        int j = left;
        while (j < right)
        {
            if (nums[j][c] < nums[right][c])
            {
                i++;
                swap(c, i, j);
            }
            j++;
        }
        i++;
        swap(c, i, right);
        qSort(c, left, i - 1);
        qSort(c, i + 1, right);
    }
}

void solve()
{
    for (int i = 0; i < m; i++)
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
    freopen("bai25.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums[i][j];
    }
    solve();
}