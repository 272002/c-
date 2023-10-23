#include <bits/stdc++.h>
using namespace std;

void search(string &pat, string &txt)
{
    int m = pat.size();
    int n = txt.size();
    int j = 0;
    for (int i = 0; i < n - m + 1; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (txt[i + j] != pat[j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << "The poition is " << i << endl;
        }
    }
}

int main()
{
    string txt = "AABAACAADAABAAABAA";
    string pat = "AABA";    

    // Function call
    search(pat, txt);
    return 0;
}
