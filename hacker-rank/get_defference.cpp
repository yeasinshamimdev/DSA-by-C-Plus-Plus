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

void print_min_max_def(Node *head)
{
    Node *temp = head;
    int min_val = head->val;
    int max_val = head->val;
    while (temp != NULL)
    {
        if (temp->val < min_val)
        {
            min_val = temp->val;
        }
        if (temp->val > max_val)
        {
            max_val = temp->val;
        }
        temp = temp->next;
    }
    cout << max_val - min_val << endl;
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

    print_min_max_def(head);

    return 0;
}
