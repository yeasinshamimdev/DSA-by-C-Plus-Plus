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
    int sum = 0;

    // using loop
    for (int i = 1; i <= n; i++) // o(n)
    {
        sum += i;
    }

    // using formula
    sum = (n * (n + 1)) / 2; // o(1)

    cout << sum << endl;

    return 0;
}
