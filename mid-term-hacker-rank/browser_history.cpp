#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    list<string> myList;
    string val;
    while (1)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        myList.push_back(val);
    }

    return 0;
}
