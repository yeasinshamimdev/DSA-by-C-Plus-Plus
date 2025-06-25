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
    // v.insert(v.begin() + 2, 100);
    // vector<int> v2 = v;
    // v.pop_back();
    // vector<int> v2 = {84, 38, 58};
    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    // v.erase(v.begin() + 2);
    // v.erase(v.begin() + 1, v.end() - 1);
    // replace(v.begin(), v.end() - 1, 3, 100);
    vector<int> v = {3, 5, 3, 9, 3};
    vector<int>::iterator it = find(v.begin(), v.end(), 50); // auto

    if (it == v.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "found";
    }
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    return 0;
}
