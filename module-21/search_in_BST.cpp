#include <iostream>
#include <algorithm>
#include <queue>
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
        return root = NULL;
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

bool search_value(Node *root, int target)
{
    if (root == NULL)
        return false;
    if (root->val == target)
        return true;
    if (root->val > target)
        return search_value(root->left, target);
    else
        return search_value(root->right, target);
}

int main()
{
    Node *root = input_tree();
    int target;
    cin >> target;
    bool found = search_value(root, target);
    if (found)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
