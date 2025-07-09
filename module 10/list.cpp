#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

int main()
{
    vector<int> myVector = {60, 70, 80, 90, 100};
    list<int> myList(myVector.begin(), myVector.end());

    // myList.insert(next(myList.begin(), 3), myVector.begin(), myVector.end());
    // myList.assign(myVector.begin(), myVector.end());
    // myList.push_back(myVector.front());

    // myList.push_front(1000);
    // myList.pop_front();
    // myList.pop_front();
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 4));
    replace(myList.begin(), myList.end(), 60, 1000);

    auto it = find(myList.begin(), myList.end(), 10000);
    if (it == myList.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found: " << *it << endl;
    }

    for (int i : myList)
    {
        cout << i << " ";
    }

    return 0;
}
