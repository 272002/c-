#include <bits/stdc++.h>
using namespace std;
void operation(int m, int n, int p, int q)
{
    int A[m][n], B[p][q],C[m][q] = {0}, T[q][m];
    cout << "Enter elements of matrix A ";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            A[i][j] = x;
        }
    }
    cout << "Enter elements of matrix B ";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            int x;
            cin >> x;
            B[i][j] = x;
        }
    }
    if (n == p)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }
    cout << "The multiplication of matrix is " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The transpose of matrix is " << endl;
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < m; j++)
        {
            T[i][j] = C[j][i];
        }
    }
    
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n, p, q;

    cout << "Enter the rows of first  matrix " << endl;
    cin >> m;
    cout << "Enter the columns of first matrix " << endl;
    cin >> n;

    cout << "Enter the rows of second  matrix " << endl;
    cin >> p;
    cout << "Enter the columns of second matrix " << endl;
    cin >> q;

    operation(m, n, p, q);

    return 0;
}