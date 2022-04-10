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

void solve(){
	// first config
	for (int i=1;i<=n;i++){
		res[i] = 0;
	}

	// thong bao cau hinh tiep theo
	printRes();
	
	// i > 0 -> chua het cau hinh
	int i = n;
	while (i > 0) {

		if (res[i] == 0) {
			// xay dung cau hinh tiep theo
			res[i++]=1;
			while (i <=n){
				res[i++]=0;
			}
			i = n;
			
			// thong bao cau hinh vua moi xay
			printRes();
		} else {
			i--;
		}
	}

}

int main() {
	n = 3;
	solve();
}