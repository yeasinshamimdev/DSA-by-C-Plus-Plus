#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <list>

using namespace std;

int main()
{
    list<int> lst;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            lst.push_front(v);
        }
        else if (x == 1)
        {
            lst.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < lst.size())
            {
                auto it = lst.begin();
                for (int i = 0; i < v; i++)
                {
                    ++it;
                }
                lst.erase(it);
            }
        }

        cout << "L -> ";
        for (int val : lst)
            cout << val << " ";
        cout << endl;

        cout << "R -> ";
        for (auto rit = lst.rbegin(); rit != lst.rend(); ++rit)
            cout << *rit << " ";
        cout << endl;
    }

    return 0;
}
