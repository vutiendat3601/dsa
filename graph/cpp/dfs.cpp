#include <bits/stdc++.h>

using namespace std;

vector<int> dske[101];
int visited[101];

void dfs(int u) {
	visited[u] = 1;
	cout << u << " ";
	for (int v : dske[u]) {
		if (!visited[v]) {
			dfs(v);
		}
	}
}

int main() {
	freopen("../input/dfs.txt", "r", stdin);
	int n, m;
	cin >> n >> m;
	cin.ignore();
	for (int i=1;i <= m;i++){
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		dske[y].push_back(x);
	}
	for (int i=1;i<=n;i++) {
		cout << i << ": ";
		for (vector<int>::iterator it = dske[i].begin(); it != dske[i].end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << endl;
	dfs(1);
}