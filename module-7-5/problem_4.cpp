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

int get_length(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_any_pos(Node *&head, int idx, int value)
{
    Node *newNode = new Node(value);
    if (idx == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int idx, value;
        cin >> idx >> value;
        int length = get_length(head);
        if (idx > length)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_any_pos(head, idx, value);
            print_linked_list(head);
        }
    }

    return 0;
}