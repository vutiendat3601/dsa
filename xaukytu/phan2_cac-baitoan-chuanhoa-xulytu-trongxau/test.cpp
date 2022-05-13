#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

int main()
{
    tuple<int, int, int> t = {1, 2, 3};
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
}