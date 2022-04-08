#include <bits/stdc++.h>

using namespace std;

int bin[10];
int n;

void printResult() {
	for (int i=1;i<=n;i++){
		cout << bin[i];
	}
	cout << endl;
}

void genBin(int i) {
	for (int j = 0;j<=1;j++) {
		bin[i] = j;
		if (i == n) {
			printResult();
		}
		else {
			genBin(i+1);
		}
	}
}

int main() {
	n =3;
	genBin(1);
}