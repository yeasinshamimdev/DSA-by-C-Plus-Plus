#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1);
    vector<long long int> pre(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    pre[1] = v[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        long long int finalSum = 0;
        if (x == 1)
        {
            finalSum = pre[y];
        }
        else
        {
            finalSum = pre[y] - pre[x - 1];
        }

        cout << finalSum << endl;
    }

    return 0;
}
