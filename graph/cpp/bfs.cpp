#include <bits/stdc++.h>

using namespace std;

vector<int> dske[101];
int visited[101];
queue<int> temp;
	int n, m;

void bfs(int u) {
	temp.push(u);
	visited[u]=1;
	while (temp.size() != 0) {
		int v = temp.front();
		temp.pop();
		cout << v << " ";
		for (int x : dske[v]) {
			if (!visited[x]){
				temp.push(x);
				visited[x]=1;
			}
		}

	}
}

int main() {
	freopen("../input/bfs.txt", "r", stdin);
	cin >> n >> m;
	for (int i =0;i<m;i++) {
		int x,  y;
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
	bfs(1);
}