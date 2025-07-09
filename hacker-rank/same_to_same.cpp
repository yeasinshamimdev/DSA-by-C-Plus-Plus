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
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void is_same_to_same(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int temp1_len = get_length(temp1);
    int temp2_len = get_length(temp2);
    if (temp1_len != temp2_len)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        for (Node *te = head1; te != NULL; te = te->next)
        {
            if (temp1->val != temp2->val)
            {
                flag = false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        flag ? cout << "YES" : cout << "NO";
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val1);
    }

    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }
    is_same_to_same(head1, head2);

    return 0;
}
