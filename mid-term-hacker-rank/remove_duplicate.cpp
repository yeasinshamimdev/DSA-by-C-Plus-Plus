#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <list>

using namespace std;

int main()
{
    list<int> lst;
    int i;
    while (1)
    {
        cin >> i;
        if (i == -1)
        {
            break;
        }
        lst.push_back(i);
    }
    lst.sort();
    lst.unique();

    for (int x : lst)
    {
        cout << x << " ";
    }

    return 0;
}
