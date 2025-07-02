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

void inset_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void inset_at_tail(Node *&head, Node *&tail, int val)
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

void print_linked_list(Node *head)
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
    inset_at_tail(head, tail, 238);
    inset_at_tail(head, tail, 50);
    inset_at_tail(head, tail, 10);
    inset_at_tail(head, tail, 5000);
    // Node *a = new Node(20);
    // Node *b = new Node(30);

    // head->next = a;
    // a->next = b;
    // inset_at_head(head, 10);

    print_linked_list(head);

    return 0;
}
