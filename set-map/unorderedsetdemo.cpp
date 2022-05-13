#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    unordered_set<int> x;
    x.insert(3);
    x.insert(1);
    x.insert(2);
    for (int i : x)
        cout << i << " ";
    cout << endl;
}