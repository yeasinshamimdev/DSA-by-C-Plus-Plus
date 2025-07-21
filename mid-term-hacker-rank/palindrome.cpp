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

void print_list(Node *head, Node *tail, int size)
{
    Node *temp1 = head;
    Node *temp2 = tail;
    bool isPalindrome = true;
    for (int i = 0; i < size / 2; i++)
    {
        if (temp1->val != temp2->val)
        {
            isPalindrome = false;
        }
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
    isPalindrome ? cout << "YES" : cout << "NO";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int x;
    int size = 0;
    while (1)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x, size);
    }
    print_list(head, tail, size);

    return 0;
}
