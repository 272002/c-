#include <bits/stdc++.h>
using namespace std;

void floor(int A[], int x, int n)
{
    int max, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(x >= A[i])
        {
            max = i;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "Floor value of " << x << " is index value " << A[max] << endl;
    }
    else
    {
        cout << "Floor value not exist " << endl;
    }
}

void ceiling(int A[], int x, int n)
{
    int k, flag = 0;
    for (int i = 0; i < n ; i++)
    {
        if (x <= A[i])
        {
            k=i;
            flag=1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Celling value of " << x << " is index value " << A[k] << endl;
    }
    else
    {
        cout << "Ceil value not exist " << endl;
    }
}
int main()
{
    int n, x;
    cout << "Enter the size of array ";
    cin >> n;
    cout << "Enter sorted array elements " << endl;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        A[i] = a;
    }
    cout << "Enter the element " << endl;
    cin >> x;
    floor(A, x, n);
    ceiling(A, x, n);
    return 0;
}