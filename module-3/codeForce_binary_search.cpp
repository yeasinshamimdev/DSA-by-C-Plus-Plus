#include <iostream>
#include <algorithm>
#include <vector>

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
    sort(v.begin(), v.end());

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        int flag = 0;
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (v[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (flag)
            cout << "found" << endl;

        else
            cout << "not found" << endl;
    }

    return 0;
}
