#include <iostream>
#include <list>

using namespace std;

class myStack
{
private:
    list<int> l;

public:
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int size()
    {
        return l.size();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty();
    }
};

class myQueue
{
private:
    list<int> l;

public:
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int size()
    {
        return l.size();
    }
    int front()
    {
        return l.front();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    myQueue q;
    myStack st;
    if (n != m)
    {
        cout << "NO";
    }
    else
    {
        int t = n;
        while (t--)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        while (m--)
        {
            int x;
            cin >> x;
            st.push(x);
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int stVal = st.top();
            st.pop();
            int qVal = q.front();
            q.pop();
            if (stVal != qVal)
            {
                flag = false;
                break;
            }
        }
        flag ? cout << "YES" : cout << "NO";
    }

    return 0;
}