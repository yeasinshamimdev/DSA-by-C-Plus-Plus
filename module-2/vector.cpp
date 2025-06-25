#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <sstream>
#include <iterator>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    // vector<int> v; // type 1
    int n;
    cin >> n;
    // vector<int> v(n); // type 2
    // vector<int> v(n, 10); // type 3
    // vector<int> v2(v);    // type 4

    // int a[n] = {12, 32, 11, 41, 53};

    // vector<int> v(a, a + n); // type 5
    vector<int> v = {12, 6, 11, 41, 53}; // type 6
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    // cout << v.back();

    return 0;
}
