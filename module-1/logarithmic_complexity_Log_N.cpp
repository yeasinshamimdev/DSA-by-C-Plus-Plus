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
    for (int i = n; i >= 1; i /= 3) // O(Log N)
    {
        cout << i << " ";
    }

    return 0;
}
