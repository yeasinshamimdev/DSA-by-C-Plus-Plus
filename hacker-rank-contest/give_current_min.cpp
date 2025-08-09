#include <bits/stdc++.h>
using namespace std;

int main()
{
  priority_queue<int, vector<int>, greater<int>> pq;
  int n;
  cin >> n;
  while (n--)
  {
    int val;
    cin >> val;
    pq.push(val);
  }

  int t;
  cin >> t;
  while (t--)
  {
    int pos, val;
    cin >> pos;
    if (pos == 0)
    {
      cin >> val;
      pq.push(val);
      cout << pq.top() << endl;
    }
    else if (pos == 1)
    {
      if (pq.empty())
        cout << "Empty" << endl;
      else
        cout << pq.top() << endl;
    }
    else if (pos == 2)
    {
      if (pq.empty())
      {
        cout << "Empty" << endl;
      }
      else
      {
        pq.pop();
        if (pq.empty())
          cout << "Empty" << endl;
        else
          cout << pq.top() << endl;
      }
    }
  }

  return 0;
}
