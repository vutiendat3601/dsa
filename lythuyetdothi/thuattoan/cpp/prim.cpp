#include <bits/stdc++.h>
#include <vector>

#define MAX_N 1001

using namespace std;

vector<pair<int,int>> g[MAX_N];
int used[MAX_N]; // used[i] = 1 thuoc tap V(MST) used[i] = 0 i thuoc tap g

int n, m;

struct tree {
	int x, y, w;
};

void input() {
	cin >> n >> m;
	for (int i=0;i<m;i++) {
		int x, y, w;
		cin >> x >> y >> w;
		g[x].push_back({y, w});
		g[y].push_back({x, w});
	}
	memset(used, 0, sizeof(used));
}

void prim(int u) {
	vector<tree> MST;
	int d = 0; // tong trong so
	used[u] = 1;
	while (MST.size() < n-1) {
		int min_w = 10000;
		int X, Y;
		for (int i = 1; i <= n;i++) {
			if (used[i]) {
				for (pair<int,int> it : g[i]) {
					int j = it.first, trongso=it.second;
					if (!used[j] && trongso < min_w) {
						min_w=trongso;
						X = j; Y = i;
					}
				}
			}
		}
		MST.push_back({X, Y, min_w});
		d += min_w;
		used[X] = 1;
	}
	cout << d << endl;
	for (tree e : MST) {
		cout << e.x << " " << e.y << endl;
	}
}

int main(){
	freopen("../input/prim.txt", "r", stdin);
	input();
	prim(1);
}