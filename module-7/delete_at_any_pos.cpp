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

void delete_at_any_pos(Node *head, int idx)
{
    if (head == NULL || idx < 1)
    {
        cout << "Invalid position" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}

void print_liked_list(Node *head)
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

    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    delete_at_any_pos(head, 2);
    print_liked_list(head);

    return 0;
}
