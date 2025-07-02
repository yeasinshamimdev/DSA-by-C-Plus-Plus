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

void insert_at_any_pos(Node *&head, int inx, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < inx; i++)
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
}

int main()
{
    // Node *head = new Node(20);
    Node *head = NULL;
    // Node *a = new Node(10);
    // head->next = a;

    insert_at_any_pos(head, 1, 80);
    insert_at_any_pos(head, 1, 40);
    insert_at_any_pos(head, 1, 50);
    print_linked_list(head);

    return 0;
}
