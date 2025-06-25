#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long int> v(n);
    vector<long long int> pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        pre[i] = sum;
    }

    reverse(pre.begin(), pre.end());

    for (auto x : pre)
    {
        cout << x << " ";
    }

    return 0;
}