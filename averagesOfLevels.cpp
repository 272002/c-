#include <bits\stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        right = NULL;
        left = NULL;
    }
};

void calculate_average(Node *root)
{
    vector<Node *> current, nxt;
    current.push_back(root);
    vector<double> ans;
    while (current.size())
    {
        double sum = 0;
        for (auto it : current)
        {
            sum += it->value;
            if (it->left != NULL)
            {
                nxt.push_back(it->left);
            }
            if (it->right != NULL)
            {
                nxt.push_back(it->right);
            }
        }
        cout<<sum<<endl;
        double value = sum / current.size();
        ans.push_back(value);

        swap(current, nxt);
        nxt.clear();
    }
    for (auto i = ans.begin(); i != ans.end(); i++)
    {
        cout << *i << " ";
    }
}

int main()
{
    Node *n1 = new Node(12);
    Node *n2 = new Node(13);
    Node *n3 = new Node(14);
    Node *n4 = new Node(15);
    Node *n5 = new Node(16);
    Node *n6 = new Node(17);
    Node *n7 = new Node(18);

    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;
    calculate_average(n1);
    return 0;
}