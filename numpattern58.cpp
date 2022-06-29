#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cout << "Enter the number";
    cin >> n;
    cout<<"*"<<endl;
    for (i = 1; i <= n; i++)
    {
        cout<<"* ";
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (k = j - 2; k > 0; k--)
        {
            cout << k << " ";
        }
        cout<<"* ";
        cout << endl;
    }
    for (i = n - 1; i > 0; i--)
    {
        cout<<"* ";
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (k = j - 2; k > 0; k--)
        {
            cout << k << " ";
        }
        cout<<"* ";
        cout << endl;
    }
    cout<<"*"<<endl;


return 0;
}