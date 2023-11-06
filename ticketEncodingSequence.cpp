#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{
    string ticketcode = "A";
    for (int i = 2; i <= t; i++)
    {
        string ntc = "";
        char currentchar = ticketcode[0];
        int cc = 0;
        for (int j = 0; j < ticketcode.length(); j++)
        {
            if (ticketcode[j] == currentchar)
            {
                cc++;
            }
            else
            {
                ntc += to_string(cc) + currentchar;
                currentchar = ticketcode[j];
                cc = 1;
            }
        }
        ntc += to_string(cc) + currentchar;
        ticketcode = ntc;
    }
    cout << ticketcode;
}

int main()
{
    int t;
    cin >> t;
    solve(t);
    return 0;
}