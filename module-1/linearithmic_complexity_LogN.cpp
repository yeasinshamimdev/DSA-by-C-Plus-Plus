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

    for (int i = 0; i < n; i++) // O(N)
    {
        for (int j = 1; j < n; j *= 2) // O(LogN)
        {
            cout << "Hello" << endl;
        }
    }

    return 0;
}

// O(N Log N)