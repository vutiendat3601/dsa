#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    freopen("multisetdemo.txt", "r", stdin);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    multiset<int> ms;
    for (int i = 0; i < k; i++)
        ms.insert(a[i]);
    for (int i = k; i < n; i++)
    {
        cout << *ms.rbegin() << " ";
        ms.erase(ms.find(a[i - k]));
        ms.insert(a[i]);
    }
    cout << *ms.rbegin() << endl;
}