#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string name;
  int roll;
  Student(string name, int roll)
  {
    this->name = name;
    this->roll = roll;
  }
};

bool cmp(Student l, Student r)
{

  if (l.name == r.name)
  {
    return l.roll > r.roll;
  }
  else
    return l.name < r.name;
};

int main()
{
  int n;
  cin >> n;
  vector<Student> v;
  for (int i = 0; i < n; i++)
  {
    string name;
    int roll;
    cin >> name >> roll;
    Student obj(name, roll);
    v.push_back(obj);
  }

  sort(v.begin(), v.end(), cmp);

  for (Student it : v)
  {
    cout << it.name << " " << it.roll << endl;
  }

  return 0;
}
