#include <bits/stdc++.h>

using namespace std;

int nums[1000];
int n;

void merge(int l, int mid, int r) {
	int a_size = mid-l+1;
	int b_size = r-mid;
	int a[a_size];
	int b[b_size];
	for (int i =0;i<a_size; i++) {
		a[i]=nums[l+i];
	}
	for (int i = 0;i<b_size;i++){
		b[i]=nums[mid+1+i];
	}
	int cnt = l;
	int a_index = 0;
	int b_index = 0;
	while (a_index < a_size && b_index < b_size) {
		if (a[a_index] < b[b_index]){
			nums[cnt++] = a[a_index++];
		}else {
			nums[cnt++]=b[b_index++];
		}
	}
	while (a_index<a_size){
		nums[cnt++] = a[a_index++];
	}
	while (b_index <b_index) {
		nums[cnt++] = b[b_index++];
	}
}

void m_sort(int l, int r) {
	if (l < r) {
		int mid = l + (r-l)/2;
		m_sort(l, mid);
		m_sort(mid + 1, r);
		merge(l, mid, r);
	}
}

int main() {
	freopen("../input/merge-sort.txt", "r", stdin);
	cin >> n;
	for (int i =0;i<n;i++) {
		cin>>nums[i];
	}
	m_sort(0, 9);
	for (int i=0;i<n;i++) {
		cout << nums[i] << " ";
	}
	cout <<endl;
}