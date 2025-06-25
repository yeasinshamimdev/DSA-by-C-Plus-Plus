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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;

        long long int sum = 0;

        for (int j = x - 1; j <= y - 1; j++)
        {
            sum += v[j];
        }

        cout << sum << endl;
    }

    return 0;
}
