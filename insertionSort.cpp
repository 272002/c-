#include<iostream>
using namespace std;


void insertionSort(int a[],int n){
    for (int i = 1; i < 7; i++)
    {
        int temp = a[i];
        int j=i-1;
        for (; j>=0 ; j--)
        {
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1] = temp; 
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}



int main(){
    int arr[100],n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    
    return 0;
}