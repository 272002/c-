#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of sides";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
         for (int j = n-i-1; j>0  ; j--)
         {
            cout<<" ";
         }
         for (int k=0; k<n; k++)
         {
            cout<<"*";
         }
         
         cout<<endl;
         
    }
    return 0;
}