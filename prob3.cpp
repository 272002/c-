#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> psum(n, 0);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        i == 0 ? psum[i] = a[i] : psum[i] = psum[i - 1] + a[i];
        mp[psum[i]] = i;
    }

    int givenindex, targetsum, queries;
    cin >> queries >> givenindex >> targetsum;
    for (int i = 0; i < queries; i++)
    {
        if (!mp.count(psum[givenindex] - targetsum))
        {
            cout << "NO" << endl;
        }
        else
        {
            mp[psum[givenindex] - targetsum] > givenindex - 1 ? cout << "NO" : cout << "YES";
        }
    }

    return 0;
}