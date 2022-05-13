#include <iostream>
#define MAX_N 1000000
#define MAX 1000000

using namespace std;

int nums[MAX_N + 1];
int n;

void solve1()
{
    int count = 0;
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
            count++;
        else
            count = 0;
        max = count >= max ? count + 1 : max;
    }
    cout << max << endl;
}

void solve2()
{
    int count = 0;
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
            count++;
        else
            count = 0;
        max = count >= max ? count + 1 : max;
    }
    cout << max << endl;
}
void solve3()
{
    int count = 0;
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] * nums[i - 1] < 0)
            count++;
        else
            count = 0;
        max = count >= max ? count + 1 : max;
    }
    cout << (max == 1 ? 0 : max) << endl;
}

void solve4()
{
    int count = 0;
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
            count++;
        else
            count = 0;
        max = count >= max ? count + 1 : max;
    }
    cout << max << endl;
}

int main()
{
    freopen("bai08.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve1();
    solve2();
    solve3();
    solve4();

}