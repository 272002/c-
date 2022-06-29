#include <bits/stdc++.h>
using namespace std;

void peak(int p[], int m)
{
    int t = -4567;
    for (int i = 1; i <= m; i++)
    {
        if ((i == 1) && (p[1] > p[2]) && (p[1] > t))
        {
            t = p[i];
        }
        else if ((i == m) && (p[m] > p[m - 1]) && (p[m] > t))
        {
            t = p[m];
        }
        else if ((p[i] > p[i - 1]) && (p[i] > p[i + 1]) && (p[i] > t))
        {
            t = p[i];
        }
    }
    cout << "The peak element is " << t;
}

int main()
{
    int m;

    cout << "Enter the size of array " << endl;
    cin >> m;
    int p[m];

    cout << "Enter elements of array  ";

    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        p[i] = x;
    }
    peak(p, m);
    return 0;
}