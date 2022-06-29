#include <bits/stdc++.h>
using namespace std;

int equilibriumpoint(int A[], int n)
{

    int total = 0;
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        total = total + A[i];
    }

    if (n == 1)
    {
        return (n - 1);
    }
    if (n == 2)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int leftsum = 0, rightsum = 0;
            if (i == 0)
            {
                sum[i] = A[i];
            }
            else
            {
                sum[i] = sum[i - 1] + A[i];
            }
            leftsum = sum[i] - A[i];
            rightsum = total - sum[i];
            if (leftsum == rightsum)
            {
                return i;
            }
        }
    }
    return -1;
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
    cout << "First equilibrium index is " << equilibriumpoint(A, n) << endl;
    return 0;
}