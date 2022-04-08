#include <bits/stdc++.h>

using namespace std;

int main() {
	int mtke[100][100];
	freopen("../input/dscanh-mtke.txt", "r", stdin);
	int n, m;
	cin >> n >> m;
	cout << n << " " << m;
	cout << endl;
	for (int i=0;i<m;i++){
		int x, y;
		cin >> x >> y;
		mtke[x][y]=mtke[y][x]=1;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++) {
			cout << mtke[i][j] << " ";
		}
		cout << endl;
	}
}