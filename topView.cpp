#include<iostream>
#include<stack>
#include<vector>
#include<map>
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

void topView(Node* root){
    if (root == NULL)
    {
        return ;
    }
    vector<Node*> curr,nxt;
    map<int,Node*>tv;
    map<Node*,int>hd;
    hd[root] = 0;
    tv[0] = root;
    curr.push_back(root);
    while (curr.size())
    {
        for (auto itr : curr)
        {
            if (itr->left!=NULL)
            {
                nxt.push_back(itr->left);
                hd[itr->left] = hd[itr] - 1;
                if (!tv.count(hd[itr] - 1))
                {
                    tv[hd[itr] - 1] = itr->left;
                }
            }
            if (itr->right!=NULL)
            {
                nxt.push_back(itr->right);
                hd[itr->right] = hd[itr] + 1;
                if (!tv.count(hd[itr] + 1))
                {
                    tv[hd[itr] + 1] = itr->right;
                }
            }
        }
        swap(curr,nxt);
        nxt.clear();
    }
    for(auto i:tv){
        cout<<(i.second)->data<<" ";
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

    topView(root);
    return 0;
}