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
    vector<int> v;
    // cout << v.capacity() << endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // cout << v.capacity() << endl;
    // cout << v.max_size();
    // cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;
    // cout << v[1] << endl;
    // cout << v.empty();
    cout << v.size() << endl;
    v.resize(7, 50);
    // cout << v.size();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
