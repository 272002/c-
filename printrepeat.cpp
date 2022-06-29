#include <bits/stdc++.h>
using namespace std;

// array elements are of range 0 to n-1

void printrepeat(int A[],int n){
    cout<<"The repeated values are "<<endl;
    for(int i=0;i<n;i++){
        {
            if(A[abs(A[i])]>=0){
                A[abs(A[i])]=-A[abs(A[i])];
            }
            else{
                cout<<abs(A[i])<<endl;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    cout << "Enter array elements " << endl;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        A[i] = a;
    }
    printrepeat(A, n);
    return 0;
}