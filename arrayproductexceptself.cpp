#include <bits/stdc++.h>
using namespace std;

void product(int A[], int n)
{
    int prod[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            int product = 1;
            for (int j = 1; j < n; j++)
            {
                product = product * A[j];
            }
            prod[i] = product;
        }
        else if (i == n - 1)
        {
            int product = 1;
            for (int j = n - 2; j >= 0; j--)
            {
                product = product * A[j];
            }
            prod[i] = product;
        }
        else
        {
            int left = 1, right = 1, product = 1;
            for (int j = i - 1; j >= 0; j--)
            {
                left = left * A[j];
            }
            for (int j = i + 1; j < n; j++)
            {
                right = right * A[j];
            }
            product = left * right;
            prod[i] = product;
        }
    }
    cout << "The output array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << prod[i] << " ";
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
    product(A, n);
    return 0;
}