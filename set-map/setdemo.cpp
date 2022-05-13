#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;
// set giu thu tu cac phan tu tu nho den lon
// set khong co phan tu trung nhau
// size, insert, count, find, erase

int main()
{
    freopen("setdemo.txt", "r", stdin);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    set<int> p;
    for (int i = 0; i < n; i++)
        p.insert(a[i]);
    // p.erase(10);
    p.erase(p.find(10));
    for (set<int>::iterator it = p.begin(); it != p.end(); it++)
        cout << *it << " ";
    cout << endl;
}