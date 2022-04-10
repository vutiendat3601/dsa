#include <bits/stdc++.h>

using namespace std;

int queens[16];
int n;

void printRes() {
	for (int i=1;i<=n;i++){
		cout << queens[i] << " ";
	}
	cout <<endl;
}

void solve(int rowTh) {
	// Tat ca kha nang queens[rowTh] co the nhan
	for (int i=1;i<=n;i++){
		int check =1;
		for (int j=1;j<rowTh;j++){
			if (i == queens[j] || rowTh-j == i - queens[j] || rowTh-j==queens[j]-i){
				check = 0;
				break;
			}
		}
		if (check) {
			// thu dat queens[rowTh]
			queens[rowTh]=i;

			// neu day la phan tu cuoi cung trong cau hinh thi thong bao cau hinh tim duoc
			if (rowTh == n) {
				printRes();
			}
			// goi xay phan tu tiep theo
			solve(rowTh+1);
		}
	}
}

int main() {
	n=4;
	solve(1);
}