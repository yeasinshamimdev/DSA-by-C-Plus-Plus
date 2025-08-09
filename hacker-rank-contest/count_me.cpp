#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++)
  {
    string name;
    getline(cin, name);
    stringstream ss(name);
    string word;
    map<string, int> freq;
    vector<pair<string, int>> order;

    int maxCount = 0;
    string maxWord;

    while (ss >> word)
    {
      freq[word]++;
      if (freq[word] == 1)
      {
        order.push_back({word, 1});
      }

      if (freq[word] > maxCount)
      {
        maxCount = freq[word];
        maxWord = word;
      }
    }

    cout << maxWord << " " << maxCount << endl;
  }

  return 0;
}
