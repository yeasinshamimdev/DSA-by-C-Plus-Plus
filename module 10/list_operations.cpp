#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 50, 60, 70, 80, 90, 100};

    // myList.remove(50);
    // myList.sort(greater<int>());
    // myList.unique();
    // myList.reverse();

    for (int i : myList)
    {
        cout << i << " ";
    }

    return 0;
}
