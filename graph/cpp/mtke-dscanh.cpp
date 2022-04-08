#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("../input/mtke-dscanh.txt", "r", stdin);
	pair<int,int> dscanh[101];
	int n;
	cin >> n;
	cin.ignore();
	int cnt = 0;
	for (int i=1;i<=n;i++){
		string s, num;
		getline(cin, s);
		stringstream sstr(s);
		int cntNum =1;
		while (sstr >> num) {
			if (i < cntNum && stoi(num)==1)
			{
				dscanh[cnt].first = i;
				dscanh[cnt].second = cntNum;
				cnt++;
			}
			cntNum++;
		}
	}

	for (int i=0;i<cnt;i++) {
		cout << dscanh[i].first <<" " << dscanh[i].second << endl;
	}

}