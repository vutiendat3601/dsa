#include <bits/stdc++.h>

using namespace std;

int res[21];
int sum[21];
int x;

void printRes(int n) {
	for (int i=1;i<n;i++){
		cout << res[i] << " + ";
	}
	cout << res[n] << endl;
}

void solve(int iTh){
	// moi gia tri co the gan cho res[iTh]
	for (int i=res[iTh-1];i<= (x-sum[iTh-1])/2;i++){
		
		// thu gan res[iTh]
		res[iTh]=i;

		// ghi nhan gia tri cho res
		sum[iTh]=sum[iTh-1]+i;

		solve(iTh+1);
	}

	res[iTh]=x-sum[iTh-1];
	// thong bao cau hinh tim duoc
	printRes(iTh);
}

int main() {
	res[0]=1;
	x = 5;
	solve(1);
}