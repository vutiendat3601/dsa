#include <bits/stdc++.h>

using namespace std;

int summands[20];
int sum[20];
int x;

void printResult(int n) {
	for (int i=1;i<n;i++) {
		cout << summands[i] << " + ";
	}
	cout << summands[n] << endl;
}

void analyze(int i) {
	// (x-sum[i-1])/2 vi -> khong de lap lai ket qua da hoan vi
	for (int j = summands[i-1]; j <= (x - sum[i-1])/2; j++) {
		summands[i] = j;
		sum[i] = sum[i-1]+j;
		analyze(i+1);
	}
	summands[i] = x-sum[i-1];
	printResult(i);
}

int main() {
	x = 7;
	summands[0]=1;
	analyze(1);
}