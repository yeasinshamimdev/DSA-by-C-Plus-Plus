#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

void fun(int *&p)
{
    p = NULL;
    // int y = 800;
    // p = &y;
    // cout << "Inside fun: " << *p << endl;
}

int main()
{
    int a = 10;
    int *p = &a;
    fun(p);
    cout << "Inside main: " << p << endl;

    return 0;
}
