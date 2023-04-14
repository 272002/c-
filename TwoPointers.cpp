#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[5] = {5,3,9,2,1};
    int target ;
    cin>>target;
    sort(arr,arr+5);
    int i = 0,j=5-1;
    while (i<j)
    {
        if (arr[i] + arr[j]>target)
        {
            j--;
        }
        else if (arr[i] + arr[j]<target)
        {
            i++;
        }
        else if (arr[i] + arr[j] == target)
        {
            cout<<"found"<<endl;
            break;
        }
    }
    
}