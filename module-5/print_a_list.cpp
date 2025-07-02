#include <iostream>

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
    Node *c = new Node(400);

    head->next = a;
    a->next = b;
    b->next = c;
    Node *Temp = new Node(5);

    int Sum = 0;
    Temp = head;
    while (Temp->next != NULL)
    {
        Sum += Temp->val;
        Temp = Temp->next;
    }
    Sum -= Temp->val;
    cout << Sum;

    // cout << node->val << endl;

    // cout << a->next->val << endl;
    // cout << head->next->next->next->val;
    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->val << endl;
    //     temp = temp->next;
    // }
    // temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->val << endl;
    //     temp = temp->next;
    // }

    return 0;
}
