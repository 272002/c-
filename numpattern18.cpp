#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,left,top;
    cout << "Enter the input ";
    cin >> n;
    left=1;
    top=2*n-1;
    k=n;
    int m[2 * n - 1][2 * n - 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = left; j <= top; j++)
        {
            m[left][j] = k;
        }
        for (int j = left + 1; j <= top; j++)
        {
            m[j][top] = k;
        }
        for (int j = top - 1; j >= left; j--)
        {
            m[top][j] = k;
        }
        for (int j = top - 1; j >= left + 1; j--)
        {
            m[j][left] = k;
        }
        left++;
        top--;
        k--;
    }
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            printf("%3d", m[i][j]);
        }
        cout << endl;
    }
    return 0;
}