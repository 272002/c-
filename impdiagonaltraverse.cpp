#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;

    cout << "Enter the rows of matrix " << endl;
    cin >> m;
    cout << "Enter the columns of matrix " << endl;
    cin >> n;
    int p[m][n];
    cout << "Enter elements of matrix  ";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            p[i][j] = x;
        }
    }
    cout << "The diagonal matrix elements are " << endl;
    for (int k = 0; k < m; k++)
    {
        int i = k;
        int j = 0;
        while (i >= 0 && j < n)
        {
            cout << p[i][j] << " ";
            i = i - 1;
            j = j + 1;
        }
        cout << endl;
    }

    for (int k = 1; k < n; k++)
    {
        int i = m - 1;
        int j = k;
        while (j < n)
        {
            cout << p[i][j] << " ";
            i = i - 1;
            j = j + 1;
        }
        cout << endl;
    }

    return 0;
}