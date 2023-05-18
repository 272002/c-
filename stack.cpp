#include <iostream>
using namespace std;

class Stack
{
    int *data;
    int top;
    int sz;

public:
    Stack(int size)
    {
        sz = size;
        data = new int[sz];
        top = -1;
    }

    void push(int item)
    {
        if (top == sz - 1)
        {
            cout << "Overflow" << endl;
        }
        else
        {

            top++;
            data[top] = item;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
            return 0;
        }
        int item = data[top];
        top--;
        return item;
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Empty " << endl;
            return 0;
        }
        return data[top];
    }
};

int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout << st.peek() << endl;
    cout << st.pop() << endl;

    return 0;
}