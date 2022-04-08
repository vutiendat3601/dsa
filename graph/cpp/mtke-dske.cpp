#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> dske[101];
	freopen("../input/mtke-dske.txt", "r", stdin);
	int n;
	cin >> n;
	cin.ignore();
	for (int i=1;i<=n;i++) {
		string s, num;
		getline(cin, s);
		stringstream sstr(s);
		int cnt = 1;
		while (sstr >> num) { 
			if (stoi(num) == 1) {
				dske[i].push_back(cnt);
			}
			cnt++;
		}
	}

	for (int i=1;i<=n;i++) {
		cout << i << ": ";
		for (vector<int>::iterator it = dske[i].begin() ; it != dske[i].end(); ++it) {
    		cout << *it << " ";
    	}
    	cout << endl;
	}
}