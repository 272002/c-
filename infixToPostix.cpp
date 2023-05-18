#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
bool isoperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        return true;
    return false;
}
string infixTopostfix(string s)
{
    stack<char> st;
    string result = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') or (s[i] >= '1' && s[i] <= '9'))
        {
            result = result + s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() and (precedence(s[i]) <= precedence(st.top())))
            {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    return result;
}

int calculate(int a, char ch, int b)
{
    if (ch == '+')
        return a + b;
    else if (ch == '-')
        return a - b;
    else if (ch == '*')
        return a * b;
    else if (ch == '/')
        return a / b;
    else if (ch == '^')
        return pow(a, b);
    return 0;
}

int eval(string &pst)
{
    int i = 0;
    stack<int> p;
    char ch;
    while (i < pst.length())
    {
        if (isoperator(pst[i]))
        {
            int fst = p.top();
            p.pop();
            int scd = p.top() ;
            p.pop();
            p.push(calculate(scd, pst[i], fst));
        }
        else
        {
            // cout<<pst[i]-'0'<<endl;
            p.push(pst[i]-'0');
        }
        i++;
    }
    int item = p.top();
    p.pop();
    return item;
}
int main()
{
    string s;
    cout << "Enter infix string " << endl;
    cin >> s;
    string post = infixTopostfix(s);
    cout << "The postfix form is :  " << post << endl;
    cout << "The evaluated form is " << eval(post);
    return 0;
}