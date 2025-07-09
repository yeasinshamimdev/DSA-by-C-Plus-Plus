#include <iostream>
#include <list>
#include <algorithm> // for replace
#include <iterator>  // for next

using namespace std;

int main()
{
    // list<int> myList({282, 28});
    // list<int> myList(5, 100);
    // cout << myList.size() << endl;
    // list<int> cpList = {10, 20, 30, 40};
    // int arr[5] = {10, 20, 30, 40, 50};

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // myList.clear();
    // myList.push_back(60);
    // myList.push_front(10);
    // myList.insert(myList.begin(), 20);
    // myList.insert(myList.begin(), 10);

    // cout << myList.empty() << endl;
    // myList.reverse();
    // myList.sort();
    // myList.remove(70);
    // myList.resize(2);
    list<int> myList({10, 40, 50, 200, 70, 40, 50});
    // myList.insert(next(myList.begin(), 2), 90);
    // myList.erase(next(myList.begin(), 3));
    // replace(myList.begin(), myList.end(), 200, 60);
    myList.sort(greater<int>());
    myList.unique();
    myList.reverse();

    for (int x : myList)
    {
        cout << x << " ";
    }

    return 0;
}
