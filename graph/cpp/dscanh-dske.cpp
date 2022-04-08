#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> dske[101];
	freopen("../input/dscanh-dske.txt", "r", stdin);
	int n, m;
	cin >> n >> m;
	for (int i=1;i<=m;i++) {
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		dske[y].push_back(x);
	}

	for (int i=1;i<=n;i++) {
		cout << i << ": ";
		for (vector<int>::iterator it = dske[i].begin() ; it != dske[i].end(); ++it) {
    		cout << *it << " ";
    	}
    	cout << endl;
	}
}