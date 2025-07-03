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

// void sort_linked_list(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         Node *minNode = temp;
//         Node *current = temp->next;

//         while (current != NULL)
//         {
//             if (current->val < minNode->val)
//             {
//                 minNode = current;
//             }
//             current = current->next;
//         }

//         if (minNode != temp)
//         {
//             swap(temp->val, minNode->val);
//         }
//         temp = temp->next;
//     }
// }

void sort_linked_list(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
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
    sort_linked_list(head);
    print_liked_list(head);

    return 0;
}
