#include <bits/stdc++.h>

using namespace std;

int res[21];
int n;

void printRes() {
	for (int i=1;i<=n;i++) {
		cout << res[i];
	}
	cout << endl;
}

void swap(int i, int j){
	int temp = res[i];
	res[i]=res[j];
	res[j]=temp;
}

void solve() {
	// xay dung cau hinh dau tien
	for (int i=1;i<=n;i++){
		res[i]=i;
	}
	// dua ra cau hinh dau tien
	printRes();

	int i=n;
	while (i > 1) {
		if (res[i] > res[i-1]){
			int j=n;
			while (res[i-1] > res[j]){
				j--;
			} 
			swap(i-1, j);
			for (j=0;j<(n-i+1)/2;j++){
				swap(i+j, n-j);
			}
			i=n;
			// thong bao cau hinh vua xay
			printRes();

		}else {
			i--;
		}
	}
}

int main() {
	n =3;
	solve();
}