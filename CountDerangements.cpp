#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &dp)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = (n - 1) * (solve(n - 2, dp) + solve(n - 1, dp));
    return dp[n];
}

// Driver code
int main()
{
    int n = 4;
    vector<int> dp(n + 1, -1);
    cout << "Count of Derangements is " << endl;
    cout << solve(n, dp);
    return 0;
}
