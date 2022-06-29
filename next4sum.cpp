#include <bits/stdc++.h>
using namespace std;

void findfoursum(int A[], int n, int number)
{
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (A[i] + A[j] + A[k] + A[l] == number)
                    {
                        cout << "Numbers are " << A[i] << "," << A[j] << "," << A[k] << "," << A[l] << endl;
                        break;
                    }
                }
            }
        }
    }
}
int main()
{
    int n, number;
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
    cout << "Enter the number to find four sum is equal " << endl;
    cin >> number;
    findfoursum(A, n, number);
    return 0;
}