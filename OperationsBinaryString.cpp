#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int a = s[0] - '0';
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'A')
        {
            i++;
            a = a & (s[i] - '0');
        }
        else if (s[i] == 'B')
        {
            i++;
            a = a | (s[i] - '0');
        }
        else if (s[i] == 'C')
        {
            i++;
            a = a ^ (s[i] - '0');
        }
    }
    cout << a << endl;
    return 0;
}