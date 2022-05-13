#include <iostream>
#define MAX_N 1000

using namespace std;

int nums[MAX_N + 1];
int n;

void solve()
{
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            if (nums[i] == nums[j])
            {
                count++;
                break;
            }
        }
        if (count == 1)
            cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    freopen("bai15.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve();
}