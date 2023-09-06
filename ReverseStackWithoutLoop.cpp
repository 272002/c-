#include<bits/stdc++.h>
using namespace std;

void reverse_stack(stack<int> rs){
    if(rs.empty()){
        return;
    }
    cout<<rs.top()<<" ";
    rs.pop();
    reverse_stack(rs);
}

int main(){
    int n,x;
    cin>>n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        st.push(x);
    }
    reverse_stack(st);
    return 0;
}