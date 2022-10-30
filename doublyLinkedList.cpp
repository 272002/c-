#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val = this->data;
        if (this->next!= NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int d)
{
    if (pos == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }
    Node *nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
}


void deleteNode(int pos ,Node* &tail, Node* &head){

    //deleting first node or start node
    if (pos == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        Node* current = head;
        Node* previous = NULL;
        int cnt = 1;
        while (cnt<pos)
        {
            previous =  current;
            current = current->next;
            cnt++;
        }
        if (current->next == NULL)
        {
            tail = previous;
        }
        current->prev = NULL;
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
    
    
}







// traverse
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length
int getlength(Node *&head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    // Node *node = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    // print(head);
    insertAtHead(head, tail, 45);
    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 4);
    insertAtHead(head, tail, 13);
    insertAtTail(head, tail, 90);
    print(head);
    insertAtPosition(head, tail, 3, 66);
    insertAtPosition(head, tail, 1, 101);
    insertAtPosition(head, tail, 8, 1);
    print(head);


    deleteNode(2,tail,head);
    deleteNode(1,tail,head);
    deleteNode(6,tail,head);
    cout<<"head-> data "<<head->data<<endl;
    cout<<"tail->data "<<tail->data<<endl;
    print(head);
    cout << getlength(head) << endl;
    return 0;
}