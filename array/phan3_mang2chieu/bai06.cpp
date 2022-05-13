#include <iostream>
#define MAX_N 100

using namespace std;

int nums[MAX_N][MAX_N];
int n, m;

void solve()
{
    // tim dong max sum
    int rMax = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
            sum += nums[i][j];
        if (sum > max)
        {
            max = sum;
            rMax = i;
        }
    }
    max = 0;
    int cMax = 0;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (j != rMax)
                sum += nums[j][i];
        }
        if (sum > max)
        {
            max = sum;
            cMax = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i != rMax)
        {
            for (int j = 0; j < m; j++)
            {
                if (j != cMax)
                    cout << nums[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    freopen("bai06.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> nums[i][j];
        }
        solve();
    }
}