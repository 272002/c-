#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cout << "Enter the size of array ";
    cin >> n;
    cout << "Enter the value through we rotate the array ";
    cin >> d;
    cout << "Enter array elements " << endl;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        A[i] = a;
    }
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = A[i];
    }
    for (int i = d; i < n; i++)
    {
        A[i - d] = A[i];
    }
    for (int i = n - d, j = 0; i < n, j < d; i++, j++)
    {
        A[i] = temp[j];
    }

    cout<<"The rotated array is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}