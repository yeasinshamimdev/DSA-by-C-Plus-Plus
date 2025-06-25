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
    // vector<int> v = {23, 43, 54, 32, 65};

    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 2, v.end());

    for (int x : v)
    {
        cout << x << endl;
    }

    return 0;
}
