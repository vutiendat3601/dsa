#include <bits/stdc++.h>

using namespace std;

int res[21];
int n;

void printRes() {
	for (int i=1;i<=n;i++){
		cout << res[i];
	}
	cout << endl;
}

void solve(int iTh) {
	// thu moi gia tri res[iTh] co the nhan
	for (int i=0;i<=1;i++){
		// thu gan res[iTh]
		res[iTh] = i;
		
		// neu iTh o vi tri cuoi cung, thong bao cau hinh tim duoc
		if (iTh == n){
			printRes();
		} else {
			// chon tiep phan tu tiep theo
			solve(iTh+1);
		}
	}
}

int main() {
	n=3;
	solve(1);
}