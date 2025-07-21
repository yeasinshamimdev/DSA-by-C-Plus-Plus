#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

class MyStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
    void print()
    {
        while (!empty())
        {
            cout << top() << endl;
            pop();
        }
    }
};

int main()
{
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.print();

    return 0;
}
