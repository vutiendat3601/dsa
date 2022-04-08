#include <bits/stdc++.h>

using namespace std;

int subset[21];
int n, k;

void printResult() {
	for (int i=1;i<=k;i++) {
		cout << subset[i];
	}
	cout << endl;
}

void genSubset(int i) {
	for (int j=subset[i-1]+1;j<= n-k+i;j++) {
		subset[i]=j;
		if (i==k){
			printResult();
		}
		else {
			genSubset(i+1);
		}
	}
}

int main() {
	n = 5;
	k = 3;
	genSubset(1);
}