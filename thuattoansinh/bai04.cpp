#include <iostream>

#define MAX_N 10

using namespace std;

string s;
int n;

void solve()
{
	int i;
	// xay dung cau hinh dau tien
	for (i = 0; i < n; i++)
		s += 'A';
	s[i] = '\0';
	cout << s << endl;
	i = n - 1;
	while (i > -1)
	{
		if (s[i] == 'B')
			i--;
		else
		{
			s[i++] = 'B';
			for (; i < n; i++)
				s[i] = 'A';
			cout << s << endl;
			i = n - 1;
		}
	}
}

int main()
{
	freopen("bai04.txt", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		s = "";
		solve();
		cout << endl;
	}
}