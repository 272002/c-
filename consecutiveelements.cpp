#include <bits/stdc++.h>
using namespace std;


void consecutiveelement(int A[], int n)
{
    
    int flag = 0;
    for(int i = 0; i < n; i++)    
    {    
      for(int j = i+1; j < n; j++)    
        {    
            if(A[j] < A[i])    
            {    
              int temp = A[i];    
                A[i] = A[j];    
                A[j] = temp;     
            }     
        }     
    }     
    cout<<"The sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        if ((A[i + 1] - A[i]) > 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout <<endl<<"The elements are not consecutive ";
    }
    else
    {
        cout <<endl<< "Elements are consecutive ";
    }
}
int main()
{
    int n, x;
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
    
    consecutiveelement(A, n);

    return 0;
}