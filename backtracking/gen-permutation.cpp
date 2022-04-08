#include <bits/stdc++.h>

using namespace std;

int permutation[21];
int visited[21];
int n;

void printResult() {
	for (int i=1;i<=n;i++) {
		cout << permutation[i];
	}
	cout << endl;
}

void genPermutation(int i) {
	for (int j = 1;j<=n;j++) {
		if (!visited[j]) {
			permutation[i]=j;
			if (i==n) {
				printResult();
			} else {
				visited[j]=1;
				genPermutation(i+1);
				visited[j]=0;
			}
		}
	}
}

int main() {
	n=3;
	genPermutation(1);
}