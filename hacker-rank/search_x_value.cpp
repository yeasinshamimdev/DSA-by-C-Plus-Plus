#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = tail;
    temp->next = newNode;
    tail = newNode;
}

void search_x_value(Node *head, int val)
{
    int i = 0;
    bool found = false;
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        if (temp->val == val)
        {
            cout << i << endl;
            found = true;
            return;
        }
        i++;
    }
    if (!found)
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val, x;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        cin >> x;
        search_x_value(head, x);
    }

    return 0;
}
