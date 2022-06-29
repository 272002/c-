#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    cout << "Enter 0's and 1's as array elements " << endl;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        A[i] = a;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
        {
            count = count + 1;
        }
    }
    for (int i = 0; i < count; i++)
    {
        A[i] = 0;
    }
    for (int i = count; i < n; i++)
    {
        A[i] = 1;
    }
    cout<<"The segregated array is "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}
