#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cout << "Enter the number";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (k = j - 2; k > 0; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (k = j - 2; k > 0; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }


return 0;
}