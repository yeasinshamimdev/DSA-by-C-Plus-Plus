#include <iostream>
#include <vector>

using namespace std;

class myStack
{
private:
    vector<int> v;

public:
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (v.empty())
        {
            cout << "The stack is empty";
        }
        else
        {
            v.pop_back();
        }
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
        if (v.size() == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    void print()
    {
        for (int x : v)
        {
            cout << x << " ";
        }
    }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(50);
    int tp = st.top();
    cout << tp << endl;
    st.pop();
    st.print();

    return 0;
}
