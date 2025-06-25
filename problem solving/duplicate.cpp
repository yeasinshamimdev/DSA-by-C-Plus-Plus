#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (v[i] == v[j])
            {
                flag = 1;
                break;
            }
        }
    }

    flag ? cout << "Yes" : cout << "NO";

    return 0;
}
