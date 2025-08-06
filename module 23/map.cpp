#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> mp;
  mp["tamim"] = 2;
  mp["ramim"] = 5;
  mp["shamim"] = 10;

  // for (auto it = mp.begin(); it != mp.end(); it++)
  // {
  //   cout << it->first << " " << it->second << endl;
  // }
  if (mp.count("hamim"))
    cout << "Ace" << endl;
  else
    cout << "Ney" << endl;

  return 0;
}
