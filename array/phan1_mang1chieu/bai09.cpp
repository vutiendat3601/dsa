#include <iostream>
#define MAX_N 100

using namespace std;

int nums[MAX_N + 1];
int res[MAX_N + 1];
int n;

void solve()
{
    int max = 1;
    int count = 1;
    int start = 0;
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1] && i < n - 1)
            count++;
        else
        {
            if (nums[i] > nums[i - 1] && i == n - 1)
                count++;
            if (count > max)
            {
                max = count;
                c = 0;
                res[c++] = start;
            }
            else if (count == max)
                res[c++] = start;
            start = i;
            count = 1;
        }
    }

    // in ket qua
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < max; j++)
            cout << nums[res[i] + j] << " ";
        cout << endl;
    }
}

int main()
{
    freopen("bai09.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        solve();
    }
}