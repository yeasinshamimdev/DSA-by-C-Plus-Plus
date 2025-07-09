#include <iostream>

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
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    size++;
}

void delete_head(Node *&head, int &size)
{
    Node *temp = head;
    head = head->next;
    if (head)
        head->prev = NULL;
    size--;
    delete temp;
}

void delete_at_tail(Node *&tail, int &size)
{
    Node *temp = tail;
    tail = tail->prev;
    if (tail)
        tail->next = NULL;
    size--;
    delete temp;
}

void delete_at_any_pos(Node *head, int pos, int &size)
{
    if (head == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    size--;
    delete temp;
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    int q;
    cin >> q;
    while (q--)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val, size);
    }
    print_list(head);
    cout << endl;
    int pos;
    cin >> pos;
    if (pos < 0 || pos > size)
    {
        cout << "Invalid position" << endl;
        return 0;
    }
    else if (pos == 0)
    {
        delete_head(head, size);
    }
    else if (pos == size)
    {
        delete_at_tail(tail, size);
    }
    else
    {
        delete_at_any_pos(head, pos, size);
    }
    print_list(head);

    return 0;
}