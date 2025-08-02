#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    queue<int> q;
    stack<int> st;
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
