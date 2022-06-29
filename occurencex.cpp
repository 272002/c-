#include <bits/stdc++.h>
using namespace std;
int occurence(int A[],int x,int n){
    int count=0;
    for (int i = 0; i <n; i++)
    {
        if(A[i]==x){
            count++;
        }
    }
    return count;
}
int main(){
    int n,x;
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
    cout<<"Enter the value for which you have to calculate occurence ";
    cin>>x;
    cout<<"The value occured "<<occurence(A,x,n)<<" number of times";
    return 0;
}