#include <iostream>
#define MAX_N 1000

using namespace std;

int a[MAX_N + 1];
int n;

void swap(int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void solve()
{
	int i = n;
	while (i > 1 && a[i] < a[i - 1])
		i--;
	if (i == 1)
	{
		for (i = 1; i <= n; i++)
			a[i] = i;
	}
	else
	{
		int j = n;
		while (a[j] < a[i - 1])
			j--;
		swap(i - 1, j);
		for (j = 0; j < (n - i + 1) / 2; j++)
			swap(i + j, n - j);
	}
	for (i = 1; i <= n; i++)
		cout << a[i];
	cout << endl;
}

int main()
{
	freopen("bai03.txt", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		solve();
	}
}