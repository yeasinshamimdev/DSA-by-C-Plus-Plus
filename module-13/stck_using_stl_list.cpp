#include <bits/stdc++.h>

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
  bool empty()
  {
    return l.empty();
  }
  int size()
  {
    return l.size();
  }
  int top()
  {
    return l.back();
  }
};

int main()
{
  myStack st;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }
  while (!st.empty())
  {
    cout << st.top() << endl;
    st.pop();
  }

  return 0;
}