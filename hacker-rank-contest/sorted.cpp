#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    set<int> s;

    while (n--)
    {
      int x;
      cin >> x;
      s.insert(x);
    }
    for (int x : s)
    {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}
