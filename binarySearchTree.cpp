#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node* root){
    vector<Node*> curr,nxt;
    curr.push_back(root);
    while (curr.size())
    {
        for(auto itr :curr){
            cout<<itr->data<<" ";
            if (itr->left!=NULL)
            {
                nxt.push_back(itr->left);
            }
            if (itr->right!=NULL)
            {
                nxt.push_back(itr->right);
            }
        }
        cout<<endl;
        swap(curr,nxt);
        nxt.clear();
    }
}


Node* insertIntoBst(Node* &root,int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root->data){
        // insert in right part
        root->right = insertIntoBst(root->right,d);
    }

    else
    {
        // insert in left part
        root->left = insertIntoBst(root->left,d);
    }
    return root;
}

void takeinput(Node* &root){
    int data;
    cin>>data;
    while (data!=-1)
    {
        root = insertIntoBst(root,data);
        cin>>data;
    }
}

Node* minval(Node* root){
    Node* temp = root;
    while(temp->left!= NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxval(Node* root){
    Node* temp = root;
    while(temp->right!= NULL){
        temp = temp->right;
    }
    return temp;
}


Node* deleteFromBST(Node* root,int value){
    if(root == NULL){
        return root;
    }

    if(root-> data == value){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 1 child
        // left child 
        if(root->left !=NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // right child
        if(root->left ==NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minval(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }

    }

    else if (root->data < value)
    {
        root->right = deleteFromBST(root->right,value);
        return root;
    }
    else
    {
        root->left = deleteFromBST(root->left,value);
        return root;
    }
    
    
}

int main(){
    Node* root = NULL;
    cout<<"Enter data to create bst"<<endl;
    takeinput(root);
    cout<<"Printing nodes "<<endl;
    levelOrderTraversal(root);
    cout<<minval(root)->data<<endl;
    cout<<maxval(root)->data<<endl;
    cout<<"delete "<<endl;
    deleteFromBST(root,20);
    cout<<"Printing nodes "<<endl;
    levelOrderTraversal(root);
    return 0;
}