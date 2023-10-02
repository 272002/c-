#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned x, y, l, r;
    cin >> x >> y >> l >> r;
    if (l < 1 && r > 32)
    {
        cout << "Not valid l and r" << endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            int mask = 1 << (i - 1);
            if (mask && y)
            {
                x = mask | x;
            }
        }
        cout << x << endl;
    }
    return 0;
}