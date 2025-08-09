#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string name;
  int roll;
  int marks;
  Student(string name, int roll, int marks)
  {
    this->name = name;
    this->roll = roll;
    this->marks = marks;
  }
};

class cmp
{
public:
  bool operator()(Student l, Student r)
  {
    if (l.marks == r.marks)
      return l.roll > r.roll;
    return l.marks < r.marks;
  }
};

int main()
{
  int n;
  cin >> n;
  priority_queue<Student, vector<Student>, cmp> pq;
  while (n--)
  {
    string name;
    int roll, marks;
    cin >> name >> roll >> marks;
    Student obj(name, roll, marks);
    pq.push(obj);
  }
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    if (x == 0)
    {
      string name;
      int roll, marks;
      cin >> name >> roll >> marks;
      Student obj(name, roll, marks);
      pq.push(obj);
      cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    }
    else if (x == 1)
    {
      if (!pq.empty())
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
      else
        cout << "Empty" << endl;
    }
    else if (x == 2)
    {
      if (pq.empty())
        cout << "Empty" << endl;
      else
      {
        pq.pop();
        if (pq.empty())
          cout << "Empty" << endl;
        else
          cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
      }
    }
  }

  return 0;
}
