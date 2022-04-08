#include <bits/stdc++.h>

using namespace std;

int bin[21];
int n;

void printResult() {
	for (int i=1;i<=n;i++) {
		cout << bin[i];
	}
	cout << endl;
}

void genBin() {
	int i;
	// xay dung cau hinh dau tien
	for (i=1;i<=n;i++) {
		bin[i]=0;
	}
	printResult();

	i = n;
	while (i>0) {
		if (bin[i] == 0) {
			bin[i] = 1;
			for (i = i+1;i <=n;i++) {
				bin[i]=0;
			}
			i = n;
			printResult();
		}
		else {
			i--;
		}
	}
}

int main() {
	n = 5;
	genBin();
}