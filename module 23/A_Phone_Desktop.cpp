#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int limit = 5 * 3;
  while (n--)
  {
    int x, y;
    cin >> x >> y;
    int screen = y / 2;
    int baki = screen * 7;
    if (y % 2 != 0)
    {
      screen++;
      baki += 11;
    }
    if (x > baki)
    {
      x -= baki;
      screen += x / 15;
      if (x % 15 != 0)
        screen++;
    }
    cout << screen << endl;
  }

  return 0;
}
