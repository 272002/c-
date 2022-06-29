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
    int min1=123456;
    int k;
    for (int i = 0; i < n; i++)
    {
        if(A[i]<min1){
            min1=A[i];
            k=i;
        }
    }

    cout<<"The first min element is "<<min1<<endl;
    for (int i = k; i < n; i++)
    {
        A[i]=A[i+1];
    }
    int min2=123456;
    for (int i = 0; i < n-1; i++)
    {
        if(A[i]<min2){
            min2=A[i];
        }
    }

    cout<<"The second min element is "<<min2<<endl;
    return 0;
}