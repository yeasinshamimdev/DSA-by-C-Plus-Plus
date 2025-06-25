#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> feq(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        feq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (feq[i] > 0)
        {
            cout << (char)(i + 'a') << " : " << feq[i] << endl;
        }
    }

    return 0;
}
