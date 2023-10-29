#include <bits/stdc++.h>
using namespace std;

int equal_0_1(string s)
{
    int ans = 0, zero = 0, one = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            zero++;
        }
        if (s[i] == '1')
        {
            one++;
        }
        if (zero == one)
        {
            ans++;
            zero = 0;
            one = 0;
        }
    }
    if (zero != 0 || one != 0)
    {
        return -1;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << equal_0_1(s);
}