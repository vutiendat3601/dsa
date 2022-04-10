#include <bits/stdc++.h>

using namespace std;

int res[21];
int visited[21];
int n;

void printRes(){
	for (int i=1;i<=n;i++){
		cout << res[i];
	}
	cout << endl;
}

void solve(int iTh) {
	for (int i =1;i<=n;i++){
		// thu tat ca cac kha nang
		if (!visited[i]) {
			// thu dat phan tu thu iTh
			res[iTh] = i;

			// neu day la phan tu cuoi cung
			if (iTh == n) {
				printRes();
			} else {

				// ghi nhan viec dat phan tu
				visited[i]=1;

				// goi de quy xay dung phan tu tiep theo
				solve(iTh+1);

				// bo ghi nhan viec dat phan tu
				visited[i]=0;
			}
		}
	}
}

int main() {
	n=3;
	solve(1);
}