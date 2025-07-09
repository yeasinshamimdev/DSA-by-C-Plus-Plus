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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    Node *slow = head;
    Node *fast = head;

    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "Cycle detected" << endl;
    else
        cout << "No cycle detected" << endl;

    // while (true)
    // {
    //     slow = slow->next;
    //     fast = fast->next->next;
    //     if (slow == fast)
    //     {
    //         cout << "Cycle detected" << endl;
    //         break;
    //     }
    //     if (slow == NULL || fast == NULL || fast->next == NULL)
    //     {
    //         cout << "No cycle detected" << endl;
    //         break;
    //     }
    // }

    return 0;
}
