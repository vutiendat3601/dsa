#include <bits/stdc++.h>

#define MAX_N 101

using namespace std;

int nums[MAX_N];
int n;

void solve(){
    for (int i =0;i<n;i++) {
        int j=0;
        for (j=0;j<i;j++){
            if (nums[j] == nums[i]) {
                break;
            }
        }
        if (j == i) {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    freopen("bai11.txt", "r", stdin);
    memset(nums,0,MAX_N);
    cin>>n;
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    solve();
}