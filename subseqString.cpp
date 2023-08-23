#include<iostream>
#include<string>
using namespace std;

void printsub(string inp,string otp,int start,int index){
    if(start==index && otp!=""){
        cout<<otp<<" ";
        return ;
    }
    // include
    printsub(inp,otp+inp[start],start+1,index);

    // exclude
    printsub(inp,otp,start + 1,index);
}

int main(){
    string s,otp="";
    cin>>s;
    // input => abc
    int l = s.length();
    printsub(s,otp,0,l);
    return 0;
}