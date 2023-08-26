#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    if (n <= 247)
    {
        cout << 0;
    }
    else
    {
        for (int i = 248; i <= n; i++)
        {
            string str = to_string(i);
            if (count(str.begin(), str.end(), '2') == 1 && count(str.begin(), str.end(), '4') == 1 && count(str.begin(), str.end(), '8') == 1)
            {
                cnt++;
            }
        }
        cout << cnt;
    }

    return 0;
}