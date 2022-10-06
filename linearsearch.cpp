#include<iostream>
using namespace std;

int main(){
    int n,i,a[100],key,flag=0;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key element "<<endl;
    cin>>key;
    for (i = 0; i < n; i++)
    {
        if(a[i]==key){
        flag=1;
        break;}
    }
    if(flag==1){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found "<<endl;
    }
    
    
    return 0;
}