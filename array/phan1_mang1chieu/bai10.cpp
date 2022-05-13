#include <bits/stdc++.h>

#define MAX_N 101

using namespace std;

int nums[MAX_N];
int n;

void solve() {
    int cnt =0;
    for (int i =1;i<n;i++) {
        if (nums[i]==nums[i-1]) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    freopen("bai10.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        memset(nums,0,MAX_N);
        cin>>n;
        for (int i=0;i<n;i++){
            cin >>nums[i];
        }
        solve();
    }
}