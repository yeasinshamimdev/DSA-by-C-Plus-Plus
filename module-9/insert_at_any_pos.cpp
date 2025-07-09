#include <iostream>

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

void insert_at_head(Node *&head, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int get_length(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insert_at_any_pos(Node *&head, Node *&tail, int index, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = newnode;
    temp->next = newnode;
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

void free_list(Node *&head)
{
    while (head)
    {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int initial_size;
    cin >> initial_size;
    while (initial_size--)
    {
        int value;
        cin >> value;
        insert_at_tail(head, tail, value);
    }
    int insert_count;
    cin >> insert_count;
    while (insert_count--)
    {
        int index, value;
        cin >> index >> value;
        int length = get_length(head);
        if (index > length)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (index == length)
        {
            insert_at_tail(head, tail, value);
        }
        else if (index <= 0)
        {
            insert_at_head(head, value);
        }
        else
        {
            insert_at_any_pos(head, tail, index, value);
        }
        print_list(head);
    }

    free_list(head);

    return 0;
}