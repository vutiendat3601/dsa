#include <bits/stdc++.h>

using namespace std;

				
vector<int> dske[101];
int visited[101];
queue<int> temp;
int n, m;

void bfs(int u) {
				
	temp.push(u);
	visited[u] = 1;
	while (temp.size() != 0) {
		int v = temp.front();
		temp.pop();
		cout << v << " ";
		for (int x : dske[v]) {
			if (!visited[x]){
				temp.push(x);
				visited[x] = 1;
			}
		}
	}
	cout << endl;
}

int parent[101];

void dfs(int u) {
	visited[u]=1;
	cout << u << " ";
	for (int v : dske[u]) {
		if (!visited[v]){
			parent[v]=u;
			dfs(v);
		}
	}
}

void getPath(int s, int t) {
	dfs(s);
	cout << endl;
	if (!visited[t]) {
		cout << "there's no path" << endl;
		return;
	}
	cout << endl << endl;
	vector<int> path;
	while (t != s) {
		path.push_back(t);
		t = parent[t];
	}
	path.push_back(s);
	reverse(path.begin(), path.end());
	for (int i : path) {
		cout << i << " ";
	}	
}

int main() {
	freopen("../input/ktduongdi.txt", "r", stdin);
	cin >> m >> n;
	for (int i=0;i< m;i++) {
		int x, y;
		cin >> x>> y;
		dske[x].push_back(y);
		dske[y].push_back(x);
	}
	for (int i=1;i<=n;i++){
		cout << i << ": ";
		for (vector<int>::iterator it = dske[i].begin();it != dske[i].end();it++){
			cout << *it << " ";
		}
		cout << endl;
	}
	// bfs(1);
	// memset(visited, 0, 100);
	// dfs(1);
	cout << endl;
	getPath(1, 10);
}