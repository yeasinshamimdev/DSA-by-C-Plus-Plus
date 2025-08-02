#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int t;
    cin >> t;
    queue<string> q;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1 && q.empty())
        {
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else if (x == 1)
        {
            cout << q.front() << endl;
            q.pop();
        }
    }

    return 0;
}