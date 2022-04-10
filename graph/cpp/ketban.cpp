#include <bits/stdc++.h>

using namespace std;

vector<int> dske[101];
int visited[101];
int n, m;
int cnt;

void dfs(int u) {
	visited[u] = 1;
	cnt++;
	for (int v: dske[u]){
		if (!visited[v]){
			dfs(v);
		}
	}
}

void solve() {
	int max = 0;
	for (int i = 1;i<=n;i++) {
		if (!visited[i]) {
			cnt = 0;
			dfs(i);
			max = max >= cnt ? max : cnt;
		}
	}
	cout << max << endl;
}

int main() {
	freopen("../input/ketban.txt", "r", stdin);
	cin>> n>>m;
	for (int i =0;i<m;i++) {
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		dske[y].push_back(x);
	}
	for (int i =1;i<=n;i++) {
		cout << i << ": ";
		for (vector<int>::iterator it = dske[i].begin(); it != dske[i].end();it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	solve();
}