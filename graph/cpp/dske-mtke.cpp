#include <bits/stdc++.h>

using namespace std;

int main() {
	int mtke[100][100];
	freopen("../input/dske-mtke.txt", "r", stdin);
	int n;
	cin >> n;
	cin.ignore();
	for (int i=1;i<=n;i++) {
		string s, num;
		getline(cin, s);
		stringstream sstr(s);
		while (sstr >> num) {
			mtke[i][stoi(num)]=1;
		}
	}

	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++) {
			cout << mtke[i][j] << " ";
		}
		cout << endl;
	}
}