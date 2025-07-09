#include <iostream>
#include <algorithm>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val, int &size)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        size++;
        return;
    }
    Node *temp = tail;
    temp->next = newnode;
    newnode->prev = temp;
    tail = newnode;
    size++;
}

void reverse_list(Node *head, Node *tail)
{
    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        swap(i->val, j->val);
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val, size);
    }
    reverse_list(head, tail);
    print_linked_list(head);

    return 0;
}
