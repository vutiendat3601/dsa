#include <iostream>
#define MAX_N 1000000
#define MAX 1000000

using namespace std;

int nums[MAX_N + 1];
int n;

void solve()
{
    int max1 = 0;
    int max2 = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = nums[i] > 0 ? nums[i] : -nums[i];
        if (temp > max1)
        {
            max2 = max1;
            max1 = temp;
        }
        else if (temp > max2)
            max2 = temp;
    }
    cout << max1 * max2 << endl;
}

int main()
{
    freopen("bai07.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve();
}