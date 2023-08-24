#include <bits/stdc++.h>
using namespace std;

void reverse_string(string s){
    stack<string> tmp;
    string str = "";
    for(int i = 0;i<s.length();i++){
        if(s[i] == ' '){
            tmp.push(str);
            str = "";
        }
        else{
            str += s[i];
        }
    }
    tmp.push(str);
    while (!tmp.empty())
    {
        cout<<tmp.top()<<" ";
        tmp.pop();
    }
    
}

int main()
{
    string s;
    getline(cin,s);
    // cin>>s;
    reverse_string(s);
    // cout << s;
}