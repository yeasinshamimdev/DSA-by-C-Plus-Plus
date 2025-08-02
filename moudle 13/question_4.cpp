#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin >> t;
    queue<char> q;
    while (t--)
    {
        string s;
        cin >> s;
        for (char ch : s)
        {
            q.push(ch);
        }
        stack<char> st;
        while (!q.empty())
        {
            char current = q.front();
            q.pop();
            if (!st.empty())
            {
                char top = st.top();
                if ((top == '0' && current == '1'))
                {
                    st.pop();
                    continue;
                }
            }
            st.push(current);
        }

        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}