#include <bits/stdc++.h>

using namespace std;

int nums[1000];
int n;

void swap(int i, int j) {
	int t = nums[i];
	nums[i]=nums[j];
	nums[j]=t;
}

void q_sort(int l, int r) {
	if (l < r) {
		int piv = r;
		int i =l-1;
		for (int j=l;j<r;j++) {
			if (nums[j] < nums[piv]) {
				i++;
				swap(i,j);
			}
		}
		i++;
		swap(i,piv);
		q_sort(l,i-1);
		q_sort(i+1,r);
	}
}

int main() {
	freopen("../input/quick-sort.txt", "r", stdin);
	cin >>n;
	for (int i =0;i<n;i++){
		cin>>nums[i];
	}
	q_sort(0,n-1);
	for (int i=0;i<n;i++){
		cout << nums[i] << " ";
	}
	cout << endl;
}