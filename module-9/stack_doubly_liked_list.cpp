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

class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            sz++;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            sz++;
        }
    }
    void pop()
    {
        Node *temp = tail;
        tail = temp->prev;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        temp->prev->next = NULL;
        sz--;
        delete temp;
    }
    int size()
    {
        return sz;
    }
    int top()
    {
        return tail->val;
    }
    void print_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    MyStack st;
    st.push(20);
    st.push(10);
    st.push(40);
    st.push(50);
    // st.pop();
    // cout << st.size() << " " << st.top() << endl;
    st.print_list();

    return 0;
}
