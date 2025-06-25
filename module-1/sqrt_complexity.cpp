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

    // for (int i = 1; i <= sqrt(n); i++)
    for (int i = 1; i * i <= n; i++)
    {
        cout << i << endl;
        if (n % i == 0)
        {
            cout << i << " Matched" << endl;
        }
    }

    return 0;
}
