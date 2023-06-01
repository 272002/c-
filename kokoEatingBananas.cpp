#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool midHoursValid(vector<int> v, int t, int h)
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % t == 0)
        {
            ans += v[i] / t;
        }
        else
        {
            ans += v[i] / t + 1;
        }
    }
    if (ans <= h)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, h, valid;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> h;
    sort(v.begin(), v.end());
    int lo = 1, hg = v[n - 1];
    while (lo < hg)
    {
        int mid = (lo + hg) / 2;
        if (midHoursValid(v, mid, h) == true)
        {
            valid = mid;
            hg = mid;
        }
        else
        {
            lo = mid + 1;
        }
        cout << mid << " ";
    }
    cout << endl;
    cout << hg << endl;
}