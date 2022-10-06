#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int B[], int n)
{
    int i,j,k;
    for (i = 0; i < n-1; i++)
    {
        k=i;
        for (j = i+1; j < n; j++)
        {
            if (B[j] < B[k])
            {
                k= j;
            }
        }
        swap(&B[i],&B[k]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }
}
int main()
{
    int A[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    selectionSort(A, n);

    return 0;
}