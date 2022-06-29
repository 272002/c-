#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n;
    cout<<"Enter number ";
    cin>>x;
    cout<<"Enter number of array elemnets ";
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        int d;
        cin>>d;
        A[i]=d;
    }
    cout<<"Array is "<<endl;
    for (int i = 0; i < n; i++)
    {
        
        cout<<A[i]<<endl;
    }
    int flag=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(x==A[i]+A[j]){
                flag=1;
            }
        }
        
    }
    if(flag==1)
    {
        cout<<"The sum is found ";
    }
    else{
        cout<<"Not Found ";
    }

    
    return 0;
}