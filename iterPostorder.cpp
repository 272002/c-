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

void iterPostorder(Node* root){
    stack<Node*> st;
    stack<int> pos;
    st.push(root);
    while (!st.empty())
    {
        Node* curr = st.top();
        st.pop();
        pos.push(curr->data);
        if (curr->left) {
            st.push(curr->left);
        }
 
        if (curr->right) {
            st.push(curr->right);
        }
    }
    while (!pos.empty())
    {
        cout<<pos.top()<<" ";
        pos.pop();
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

    iterPostorder(root);
    return 0;
}