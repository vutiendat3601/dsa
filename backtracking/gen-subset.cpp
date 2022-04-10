#include <bits/stdc++.h>

using namespace std;

int res[21];
int n, k;

void printRes() {
	for (int i=1;i<=k;i++){
		cout << res[i];
	}
	cout << endl;
}

void solve(int iTh) {
	// thu tat ca cac kha nang res[iTh co the nhan]
	for (int i = res[iTh-1]+1; i <= (n-k+iTh); i++){
		// thu dat res[iTh]
		res[iTh]=i;

		// neu day la phan tu cuoi cung thong bao cau hinh tim duoc
		if (iTh == k){
			printRes();
		} else {
			// goi de quy xay dung phan tu tiep theo
			solve(iTh+1);
		}
	}
}

int main() {
	n = 5;
	k = 3;
	solve(1);
}