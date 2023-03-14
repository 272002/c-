#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    // destructor
    ~ node(){
        int value = this->data;
        
        //code for memory free
        if (next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for data "<<value<<endl;;
    }
};

void insertAtHead(node *&head, node *&tail, int d)
{

    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(node *&head, node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }

    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}


void deleteNode(int position,node* &head,node* &tail){
    if(position == 1){
        node* temp = head;
        temp->next->prev = NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;
        
    }

    else
    {
        node* curr = head;
        node* temp = NULL;
        int cnt = 1;
        while (cnt<position)
        {
            temp = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {
            tail = temp;
        }
        curr->prev = NULL;
        temp->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
    
}

void printNode(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(node *&head)
{
    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{

    // node *node1 = new node(10);
    node *head = NULL;
    node *tail = NULL;
    // printNode(head);
    insertAtHead(head, tail, 89);
    insertAtHead(head, tail, 34);
    printNode(head);

    insertAtTail(head, tail, 789);
    insertAtTail(head, tail, 65);
    printNode(head);

    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    insertAtPosition(head, tail, 3, 77);
    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    insertAtPosition(head, tail, 1, 100);
    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    printNode(head);
    insertAtPosition(head, tail, 7, 770);
    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    printNode(head);

    deleteNode(1,head,tail);
    // cout<<endl;
    printNode(head);
    // cout<<endl;
    deleteNode(6,head,tail);
    printNode(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data; 

    cout <<endl<< getLength(head) << endl;
    return 0;
}