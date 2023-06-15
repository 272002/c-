#include<iostream>
#include<stack>
using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

void iterPreorder(Node* root){
    stack<Node*> st;
    Node* curr = root;
    while (!st.empty() || curr != nullptr)
    {
        if (curr == NULL)
        {
            curr = st.top();
            st.pop();
            curr = curr->right;
        }
        else
        {
            cout<<curr->data<<" ";
            st.push(curr);
            curr = curr->left;
        }
        
    }
    
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);

    iterPreorder(root);
    return 0;
}