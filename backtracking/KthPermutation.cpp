#include <bits/stdc++.h>
using namespace std;

void Kthpermutation(string &s, vector<string> &result, int index)
{
    if (index == s.size())
    {
        result.push_back(s);
        return;
    }
    for (int i = index; i < s.length(); i++)
    {
        swap(s[i], s[index]);
        Kthpermutation(s, result, index + 1);
        swap(s[i], s[index]);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    string s="";
    for (int i = 1; i <= n; i++)
    {
        s.push_back(i+'0');
    }
    vector<string> result;
    Kthpermutation(s,result, 0);
    sort(result.begin(),result.end());
    cout<<result[k-1];
    
    return 0;
}