#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char a, b;
    cin >> s;
    cin >> a >> b;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == a)
        {
            s[i] = b;
        }
        else if (s[i] == b)
        {
            s[i] = a;
        }
    }
    cout << s;
    return 0;
}