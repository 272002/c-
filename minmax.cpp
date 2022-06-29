#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int min=32767;
    int max=-32767;
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
    for (int i = 0; i < n; i++)
    {
        if(A[i]<min){
            min=A[i];
        }
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"The min element is "<<min<<endl;
    cout<<"The max element is "<<max<<endl;
 
    return 0;
}