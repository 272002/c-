#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n, sum;
    cin >> sum >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    if (arr[0] + arr[1] <= sum)
    {
        cout << arr[0] * arr[1];
    }
    else
    {
        cout << 0;
    }

    return 0;
}