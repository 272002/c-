#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    cout << "enter the k largest element " << endl;
    cin >> k;
    cout << "The " << k << " largest element are " << endl;
    for (int i = n - 1; i > n - k - 1; i--)
    {
        cout << A[i] << " ";
    }

    return 0;
}