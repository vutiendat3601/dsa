#include <iostream>
#define MAX_N 1000

using namespace std;

int nums[MAX_N + 1];
int counts[MAX_N + 1];
int n;

void solve()
{
    for (int i = 0; i < n - 1; i++)
    {
        if (!counts[nums[i]])
        {
            counts[nums[i]]++;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] == nums[j])
                    counts[nums[i]]++;
            }
            cout << nums[i] << " " << counts[nums[i]] << endl;
        }
    }
}

int main()
{
    freopen("bai14.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve();
}