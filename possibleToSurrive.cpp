#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s,m;
    cin>>s>>n>>m;
    if((n<m)||((6*n<7*m)&&s>6)){
        cout<<-1;
    }
    else{
        int days = s*m/n;
        if((s*m)%n!=0) days++;
        cout<<days;
    }
    return 0;
}