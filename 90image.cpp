#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    
    cout << "Enter the number of rows " << endl;
    cin >> m;
    cout << "Enter the number of columns " << endl;
    cin >> n;
    int M[m][n];
    int D[n][m];
    cout << "Enter the array elements " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            M[i][j] = a;
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            D[i][j] = M[m - 1 - j][i];
        }
    }
    cout << "The 90 degree rotation is " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}