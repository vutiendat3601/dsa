#include <iostream>
#define MAX_N 100

using namespace std;

int nums[MAX_N + 1];
int n;

int isAscending()
{
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] >= nums[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    freopen("./bai02.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int res = isAscending();
    if (res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}