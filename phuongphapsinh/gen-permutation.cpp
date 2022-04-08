#include <bits/stdc++.h>

using namespace std;

int permutation[21];
int n;

void printResult() {
	for (int i=1;i<=n;i++) {
		cout << permutation[i];
	}
	cout << endl;
}

void swap(int i, int j) {
	int temp = permutation[i];
	permutation[i]=permutation[j];
	permutation[j]=temp;
}

void genPermutation() {
	int i;
	// xay dung cau hinh dau tien
	for (i = 1;i <= n;i++) {
		permutation[i] = i;
	}
	printResult();

	i = n;
	while (i > 1) {
		if (permutation[i] > permutation[i-1]) {
			int j = n;
			while (permutation[j] < permutation[i-1]) { j--;}
			swap(i-1, j);
			for (j=0;j<(n-i+1)/2;j++){
				swap(i+j, n-j);
			}
				printResult();

				i=n;

		}
		else {
			i--;
		}
	}
}

int main() {
	n = 3;
	genPermutation();
}