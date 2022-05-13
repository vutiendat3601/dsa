#include <iostream>
#define MAX_N 1000000

using namespace std;

int nums[MAX_N + 1];
int n;

int ucln(int x, int y)
{
    if (y == 0)
        return x;
    return ucln(y, x % y);
}

void solve()
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (ucln(nums[i], nums[j]) == 1)
                count++;
    }
    cout << count << endl;
}

int main()
{
    freopen("bai06.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve();
}