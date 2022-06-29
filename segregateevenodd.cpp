#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
void segregate(int A[],int n){
    int j=-1;
    for (int i = 0; i < n; i++)
    {
        if(A[i]%2==0){
            j++;
            swap(&A[i],&A[j]);
        }
    }
    
}

int main(){
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    cout << "Enter array elements " << endl;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        A[i] = value;
    }
    segregate(A,n);
    cout<<"The segregated array elements are ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}