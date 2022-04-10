#include <bits/stdc++.h>

using namespace std;

vector<int> dske[101];
int visited[101];
int n, m;

void dfs(int u) {
	// ghi nhan viec tham dinh u
	visited[u]=1;
	cout << u << " ";

	// duyet cac phan tu ke u
	for (int v : dske[u]){

		// neu phan tu ke u chua tham thi goi de quy de tham
		if (!visited[v]) {
			dfs(v);
		}
	}
}

int main() {
	freopen("../input/dfs.txt", "r", stdin);
	cin >> n >> m;
	for (int i = 0; i< m;i++){
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		dske[y].push_back(x);
	}
	dfs(1);
}