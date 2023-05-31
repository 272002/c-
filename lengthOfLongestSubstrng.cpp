// #include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <vector>
// #include <string>
#include<bits\stdc++.h>
using namespace std;

bool distinct(string s, int i, int j)
{
    vector<bool> v(26);
    for (int k = i; k <= j; k++)
    {
        if (v[s[k] - 'a'] == true)
        {
            return false;
        }
        v[s[k] - 'a'] = true;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    int mx = 0,i=0,j=0;
    int len = s.size();
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)    
        {
            if (distinct(s, i, j))
            {
                mx = max(mx, j - i + 1);
            }
        }
    }
    cout << mx << endl;
    return 0;
}