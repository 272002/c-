#include<bits/stdc++.h>
using namespace std;

void nextSmallerElement(vector<int> input,int n){
    vector<int> result;
    stack<int> st;
    for (int i = n-1; i >= 0; i--)
    {
        int curr = input[i];
        while ((!st.empty())&&(st.top()>=curr))
        {
            st.pop();
        }
        if(st.empty()){
            result.push_back(-1);
        }
        else{
            result.push_back(st.top());
        }
        st.push(curr);
    }
    reverse(result.begin(),result.end());
    for (int i = 0; i < n; i++)
    {
        cout<<result[i]<<" ";
    }
}


int main(){
    int n,ele;
    cin>>n;
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        cin>>ele;
        input.push_back(ele);
    }
    nextSmallerElement(input,n);
    return 0;
}