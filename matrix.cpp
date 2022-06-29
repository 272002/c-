#include <bits/stdc++.h>
using namespace std;

void operation(int m,int n)
{
    int C[m][n], A[m][n] ,B[m][n],S[m][n]; 
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            B[i][j] = x;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "The addition of matrix is " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            S[i][j] = A[i][j] - B[i][j];
        }
    }
    cout << "The subtraction of matrix is " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << S[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    
    cout << "Enter the rows of matrix " << endl;
    cin >> m;
    cout << "Enter the columns of matrix " << endl;
    cin >> n;
    
    operation(m, n);
 

    return 0;
}