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
    int n;
    cin >> n;
    // vector<int> v(n);
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
