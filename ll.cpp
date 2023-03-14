#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~ node(){
        int value = this->data;
        
        //code for memory free
        if (this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<endl<<"Memory is free for data "<<value;
    }
};

void insertAtHead(node* &head,int d){
    // create a new node
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail,int d){
    // create a new node
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}


void insertAtPosition(node* &head,node* &tail,int position,int d){

    // insert at starting
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    node* temp = head;

    int cnt = 1;
    while (cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at end;
    if (temp->next == NULL)
    {
        insertAtTail(tail,d);
        return ;
    }
    
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    
}


void deleteNode(int position,node* &head,node* &tail){
    if(position == 1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while (cnt<position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        
    }
    
}


void printNode(node* &head){
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    node* node1 = new node(10);
    // cout<<node1->data<<" "<<node1->next;

    node* head = node1;
    node* tail = node1;

    insertAtHead(head,12);
    insertAtHead(head,15);
    insertAtTail(tail,30);
    insertAtTail(tail,190);
    insertAtPosition(head,tail,3,77);
    insertAtPosition(head,tail,1,100);
    insertAtPosition(head,tail,8,789);
    printNode(head);
    deleteNode(1,head,tail);
    cout<<endl;
    printNode(head);
    deleteNode(7,head,tail);
    cout<<endl;
    printNode(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data; 
    return 0;
}