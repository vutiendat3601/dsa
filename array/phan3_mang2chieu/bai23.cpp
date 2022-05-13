#include <iostream>
#define MAX_N 10

using namespace std;
int nums[MAX_N][MAX_N];
int n;
int fibo[MAX_N * MAX_N];

void makeFibo()
{
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < MAX_N * MAX_N; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
}

void solve()
{
    int i = 0;
    int rT = 0;
    int rB = n - 1;
    int cL = 0;
    int cR = n - 1;
    while (i < n * n)
    {
        for (int j = cL; j <= cR; j++)
            nums[rT][j] = fibo[i++];
        rT++;
        for (int j = rT; j <= rB; j++)
            nums[j][cR] = fibo[i++];
        cR--;
        for (int j = cR; j >= cL; j--)
            nums[rB][j] = fibo[i++];
        rB--;
        for (int j = rB; j >= rT; j--)
            nums[j][cL] = fibo[i++];
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
    makeFibo();
    freopen("bai23.txt", "r", stdin);
    cin >> n;
    solve();
}