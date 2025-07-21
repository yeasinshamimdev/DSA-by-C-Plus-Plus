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
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val, int index, int &size)
{
    Node *newnode = new Node(val);
    Node *temp = tail;
    temp->next = newnode;
    newnode->prev = temp;
    tail = newnode;
    size++;
}

void insert_at_any_pos(Node *head, int val, int index, int &size)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;
    size++;
}

void insert_at_head(Node *&head, Node *&tail, int val, int &size)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        size++;
        return;
    }
    Node *temp = head;
    temp->prev = newnode;
    newnode->next = temp;
    head = newnode;
    size++;
}

void print_left(Node *head)
{
    Node *temp = head;
    cout << "L ->";
    while (temp != NULL)
    {
        cout << " " << temp->val;
        temp = temp->next;
    }
    cout << endl;
}

void print_right(Node *tail)
{
    Node *temp = tail;
    cout << "R ->";
    while (temp != NULL)
    {
        cout << " " << temp->val;
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    int size = 0;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x > 0 && head == NULL)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (x == 0)
        {
            insert_at_head(head, tail, v, size);
            print_left(head);
            print_right(tail);
        }
        else if (x > size)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (x == size)
        {
            insert_at_tail(head, tail, v, x, size);
            print_left(head);
            print_right(tail);
        }
        else
        {
            insert_at_any_pos(head, v, x, size);
            print_left(head);
            print_right(tail);
        }
    }

    return 0;
}
