#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(10);
    for (int i = 0; i < 10; i++)
        a.push_back(i);
    for (vector<int>::iterator it = a.begin(); it < a.end(); it++)
        cout << *it << " ";
}