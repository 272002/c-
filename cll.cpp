#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int value = this->data;

        // code for memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << endl
             << "Memory is free for data " << value;
    }
};

void insertNode(node* &tail, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        temp->next = tail;
    }
    else
    {
        node *temp = new node(d);
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
    }
}

void printNode(node* &tail)
{
    node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout<<endl;
}

int main()
{
    node *tail = NULL;
    insertNode(tail, 23);
    printNode(tail);
    insertNode(tail, 256);
    printNode(tail);
    insertNode(tail, 789);
    printNode(tail);
    cout << tail->data << endl;
    return 0;
}