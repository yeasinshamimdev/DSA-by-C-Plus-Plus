#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *input_tree()
{
  int val;
  cin >> val;
  Node *root;
  if (val == -1)
    root = NULL;
  else
    root = new Node(val);
  queue<Node *> q;
  if (root)
    q.push(root);
  while (!q.empty())
  {
    Node *p = q.front();
    q.pop();
    int l, r;
    cin >> l >> r;
    Node *myleft, *myright;
    if (l == -1)
      myleft = NULL;
    else
      myleft = new Node(l);
    if (r == -1)
      myright = NULL;
    else
      myright = new Node(r);

    p->left = myleft;
    p->right = myright;

    if (p->left)
      q.push(p->left);
    if (p->right)
      q.push(p->right);
  }
  return root;
}

int max_depth(Node *root)
{
  if (root == NULL)
    return 0;
  int l = max_depth(root->left);
  int r = max_depth(root->right);
  return max(l, r) + 1;
}

void print_level(Node *root, int x)
{
  if (root == NULL)
    return;
  queue<Node *> q;
  if (root)
    q.push(root);
  int level = 0;
  while (!q.empty())
  {
    int sz = q.size();
    if (level == x)
    {
      for (int i = 0; i < sz; i++)
      {
        Node *node = q.front();
        q.pop();
        cout << node->val << " ";
      }
      cout << endl;
      return;
    }
    for (int i = 0; i < sz; i++)
    {
      Node *node = q.front();
      q.pop();
      if (node->left)
        q.push(node->left);
      if (node->right)
        q.push(node->right);
    }

    level++;
  }
}

int main()
{
  Node *root = input_tree();
  int x;
  cin >> x;
  int depth = max_depth(root) - 1;
  if (x > depth)
    cout << "Invalid" << endl;
  else
  {
    print_level(root, x);
  }

  return 0;
}
