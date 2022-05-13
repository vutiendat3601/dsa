#include <iostream>
#define MAX_N 100

using namespace std;

int nums[MAX_N + 1];
int n;

void solve()
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= nums[j])
        {
            j = i;
            cout << nums[i] << " ";
        }
    }
}
int main()
{
    freopen("bai03.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve();
}