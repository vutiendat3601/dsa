#include <bits/stdc++.h>
#include <map>

// map luu tru du lieu theo key, value
// cac key cua map la unique

using namespace std;

int main()
{
    map<int, int> m;
    m[1] = 200;
    m[2] = 300;
    m.insert({20, 10});
    cout << m.size() << endl;
    m[2] = 130;
    cout << m.size() << endl;
    cout << m.contains(2);
    for (pair<int, int> x : m)
        cout << x.first << " " << x.second << endl;
    cout << endl;
    for (auto x : m)
        cout << x.first << " " << x.second << endl;
    cout << endl;
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second << endl;
    cout << endl;
}