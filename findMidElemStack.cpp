#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int d)
    {
        data = d;
        next = prev = NULL;
    }
};
node *dummy = new node(-1);
node *head = dummy;
node *mid = dummy;
int cnt = 0;

void push(int value)
{
    node *curr = new node(value);
    curr->prev = head;
    curr->next = NULL;
    cnt++;
    head->next = curr;
    head = curr;
    if (cnt == 1)
    {
        mid = curr;
    }
    else if (cnt % 2 == 0)
    {
        mid = mid->next;
    }
}

int pop()
{
    if (cnt == 0)
    {
        cout << "Emty stack " << endl;
        return -1;
    }
    node *temp = head;
    int value = head->data;
    head = head->prev;
    if (head != NULL)
    {
        head->next = NULL;
    }
    cnt--;
    if (cnt % 2 != 0)
    {
        mid = mid->prev;
    }
    free(temp);
    return value;
}

int middle()
{
    if (cnt == 0)
    {
        cout << "Stack is empty " << endl;
        return -1;
    }
    return mid->data;
}

void printdata()
{
    node *temp = head;
    if (cnt == 0)
    {
        cout << "Stack is empty " << endl;
        return;
    }
    for (int i = 0; i < cnt; i++)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printdata();
    cout << "middle element is " << middle() << endl;
    cout << "Deleted element is " << pop() << endl;
    cout << "Deleted element is " << pop() << endl;
    // cout << "Deleted element is " << pop() << endl;
    cout << "middle element is " << middle() << endl;
    return 0;
}