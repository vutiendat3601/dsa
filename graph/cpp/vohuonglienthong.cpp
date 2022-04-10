#include <bits/stdc++.h> 

using namespace std;

vector<int> dske[101];
int visited[101];
int n, m;

void dfs(int u) {
	cout << u << " ";
	visited[u]=1;
	for (int v : dske[u]){
		if (!visited[v]){
			dfs(v);
		}
	}
}

void solve() {
	int cnt = 1;
	for (int i = 1; i <= n;i++) {
		if (!visited[i]){
			cout << cnt++ << ": ";
			dfs(i);
			cout << endl;
		}
	}
	cout << endl;
}

int main() {
	freopen("../input/vohuonglienthong.txt", "r", stdin);
	cin >> n>>m;
	for (int i =0;i<m;i++) {
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		dske[y].push_back(x);
	}
	solve();
}