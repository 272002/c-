#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *reverse(node *temp)
{
    node *prev = NULL;
    node *curr = temp;
    node *nxt = NULL;
    while (curr)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

node *GKN(node *temp, int k)
{
    k -= 1;
    while (temp != NULL && k > 0)
    {
        k--;
        temp = temp->next;
    }
    return temp;
}

node *reverseIt(node *head, int k)
{
    // Complete this method
    node *temp = head;
    node *kth = NULL;
    node *prevnode = NULL;
    node *nextnode = NULL;
    while (temp != NULL)
    {
        kth = GKN(temp, k);
        if (kth == NULL)
        {
            if (prevnode != NULL)
            {
                prevnode->next = reverse(temp);
            }
            else
            {
                head = reverse(temp);
            }
            break;
        }

        else
        {
            nextnode = kth->next;
            kth->next = NULL;
            reverse(temp);
            if (temp == head)
            {
                head = kth;
            }
            else
            {
                prevnode->next = kth;
            }
        }
        prevnode = temp;
        temp = nextnode;
    }
    return head;
}

void push(node **head_ref, int new_data)
{

    node *new_node = new node();

    new_node->data = new_data;

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

/* Function to print linked list */
void printList(node *prt)
{
    while (prt != NULL)
    {
        cout << prt->data << " ";
        prt = prt->next;
    }
}

/* Driver code*/
int main()
{
    /* Start with the empty list */
    node *head = NULL;

    /* Created Linked list
    is 1->2->3->4->5->6->7->8 */
    push(&head, 8);
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout << "Given linked list \n";
    printList(head);
    head = reverseIt(head, 3);

    cout << "\nReversed Linked list \n";
    printList(head);

    return (0);
}
