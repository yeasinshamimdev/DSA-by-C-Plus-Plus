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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

int get_length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void delete_at_any_pos(Node *&head, Node *&tail, int pos)
{
    if (pos >= get_length(head))
    {
        return;
    }
    else if (pos == 0)
    {
        head = head->next;
        if (head == NULL)
            tail = NULL;
        return;
    }
    if (pos == get_length(head) - 1)
    {
        Node *tempHead = head;
        while (tempHead->next->next != NULL)
        {
            tempHead = tempHead->next;
        }
        tempHead->next = NULL;
        tail = tempHead;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

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

void print_list(Node *head)
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

    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        if (idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (idx == 1)
        {
            insert_at_tail(head, tail, val);
        }
        else if (idx == 2)
        {
            delete_at_any_pos(head, tail, val);
        }
        print_list(head);
    }

    return 0;
}
