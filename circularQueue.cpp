#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int size;
    int rear, front;

    public:
    Queue(int s)
    {
        size = s;
        front = rear = -1;
        arr = new int[s];
    }
    void enQueue(int x);
    int deQueue();
    void displayQueue();
};

void Queue::enQueue(int x)
{
    if ((front == 0 && rear == size - 1) || (rear == front - 1))
    {
        cout << "Queue full" << endl;
    }
    else if (front == -1)
    {
        front = rear = 0;
        arr[rear] = x;
    }
    else if (front != 0 && rear == size - 1)
    {
        rear = 0;
        arr[rear] = x;
    }
    else
    {
        rear++;
        arr[rear] = x;
    }
}

int Queue::deQueue()
{
    if (front == -1)
    {
        cout << "Queue is empty " << endl;
        return -1;
    }
    int data = arr[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
    return data;
}

void Queue::displayQueue()
{
    if (front == -1)
    {
        cout << "Queue is empty " << endl;
        return;
    }

    cout << "Elements in the circular queue are " << endl;
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        for (int i = front; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
    cout<<endl;
}

int main()
{
    Queue q(5);
 
    // Inserting elements in Circular Queue
    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);
 
    // Display elements present in Circular Queue
    q.displayQueue();
 
    // Deleting elements from Circular Queue
    cout<<"Deleted value = "<<q.deQueue()<<endl;
    cout<<"Deleted value = "<<q.deQueue()<<endl;
 
    q.displayQueue();
 
    q.enQueue(9);
    q.enQueue(20);
    q.enQueue(5);
 
    q.displayQueue();
 
    q.enQueue(20);
    return 0;
}