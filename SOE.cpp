#include <bits/stdc++.h>
using namespace std;

void SOE(int n)
{
    vector<bool> bit(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (bit[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j = j + i)
            {
                bit[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    SOE(n);
    return 0;
}