#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    cout << "Enter array elements " << endl;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        A[i] = a;
    }

    int *C = new int(n+1);
    for (int i = 0; i <= n; i++)
    {
        C[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        C[A[i]]=C[A[i]]+1;
    }
    int j=0,k=0;
    while (k<n+1)
    {
        if(C[k]>0){
        A[j++]=k;
        C[k]=C[k]-1;
        }
        else {
            k=k+1;
        }
    }

     cout<<"The array is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    

    

    return 0;
}