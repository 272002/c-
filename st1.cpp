#include<iostream>
#include<cmath>
#define maxstk 5
using namespace std;
class Stack{
    int data[maxstk];
    int top;
    public:
        Stack()
        {
            top=-1;
        }
        void push(int item)
        {
            if(top==maxstk-1)
            {
                cout<<"Overflow\n";
                return;
            }
            top++;
            data[top]=item;
        }
        int pop()
        {
            if(top==-1)
            {
                cout<<"underflow\n";
                return 0;
            }
            int item=data[top];
            top--;
            return item;
        }
        int peek()
        {
            if(top==-1)
            {
                //cout<<"underflow\n";
                return 0;
            }
            return data[top];
        }
};
bool isoperator(char ch)
{
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^')
        return true;
    return false;
}
int precedenty(char ch)
{
    if(ch=='^')
        return 3;
    if(ch== '*' || ch=='/')
        return 2;
    if(ch=='+' || ch=='-')
        return 1;
    return 0;
}
string intopost(string &in)
{
    string post;
    Stack s1;
    int i=0;
    while(i<in.length())
    {
        if(isoperator(in[i]))
        {
            while(precedenty(s1.peek())>=precedenty(in[i]))
            {
                post.push_back(s1.pop());
            }
            s1.push(in[i]);
        }
        else
        {
            post.push_back(in[i]);
        }
        i++;
    }
    while (s1.peek())
    {
        post.push_back(s1.pop());
    }
    return post;
}
int solve(int a, char ch, int b)
{
    if(ch=='+')
        return a+b;
    if(ch=='-')
        return a-b;
    if(ch=='*')
        return a*b;
    if(ch=='/')
        return a/b;
    if(ch=='^')
        return pow(a,b);
    return 0;
   
}
int evalpost(string &post)
{
    Stack s1;
    int i=0;
    while(i<post.length())
    {
        if(isoperator(post[i]))
        {
            int fst,sec;
            fst=s1.pop();
            sec=s1.pop();
            s1.push(solve(sec,post[i],fst));
        }
        else
        {
            s1.push(post[i]-'0');
        }
        i++;
    }
    return s1.pop();
}
int main()
{
    string in,post;
    cout<<"Enter infix notation:";
    cin>>in;
    post=intopost(in);
    cout<<"Postfix Notation = "<<post<<endl;
    cout<<evalpost(post);

}