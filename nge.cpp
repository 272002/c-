#include <bits/stdc++.h>
using namespace std;

void nge(int A[], int n)
{
    int max;
    for (int i = 0; i < n; i++)
    {
        max = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] < A[j])
            {
                max = A[j];
                break;
            }
        }
        cout << A[i] << " --> " << max << endl;
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
    nge(A, n);
    return 0;
}