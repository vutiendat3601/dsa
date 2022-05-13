#include <iostream>
#define MAX_N 100

using namespace std;
int nums[MAX_N][MAX_N];
int n;

void solve()
{
    int i = n * n;
    int rT = 0;
    int rB = n - 1;
    int cL = 0;
    int cR = n - 1;
    while (i > 0)
    {
        for (int j = cL; j <= cR; j++)
            nums[rT][j] = i--;
        rT++;
        for (int j = rT; j <= rB; j++)
            nums[j][cR] = i--;
        cR--;
        for (int j = cR; j >= cL; j--)
            nums[rB][j] = i--;
        rB--;
        for (int j = rB; j >= rT; j--)
            nums[j][cL] = i--;
        cL++;
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << nums[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    freopen("bai21.txt", "r", stdin);
    cin >> n;
    solve();
}