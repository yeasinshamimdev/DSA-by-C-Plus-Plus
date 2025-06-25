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
    cin.ignore();
    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }

    for (string x : v)
    {
        cout << x << endl;
    }

    return 0;
}
