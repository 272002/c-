#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d) // we take referenced because we don't want to make copy ,i want to make change in original linked list
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}


void insertAtTail(Node* &tail, int d) // we take referenced because we don't want to make copy ,i want to make change in original linked list
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


void InsertAtPosition(Node* &head,Node* &tail,int pos ,int d){

    if (pos == 1)
    {
        insertAtHead(head,d);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;
    while (cnt<pos-1)
    {
        temp = temp -> next;
        cnt++;
    }

    if (temp -> next == NULL )
    {
        insertAtTail(tail,d);
        return;
    }
    

    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
    
}

void print(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node = new Node(1);
    // cout << node->data << endl;
    // cout << node->next;
    // Node *node = new Node();
    Node* head = node;
    Node* tail = node;
    insertAtHead(head, 12);
    insertAtTail(tail, 89);
    InsertAtPosition(head,tail,4,65);
    
    print(head);
    return 0;
}