#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i];
    // }
    int mid = (0 + n) / 2;
  
    // cout<<mid;
    // cout<<v[mid];
    if (v[mid] > 0)
    {
        
        for (int i = mid; i < n; i++)
        {
            int j=0;
            while (j < mid)
            {
                if (v[i] + v[j] == 0)
                {
                    cout << v[i] << " , " << v[j]<<endl;
                    
                }
                j++;
            }
        }
    }

    else
    {
        for (int i = 0; i < mid; i++)
        {
            int k=mid;
            while (k < n)
            {
                if (v[i] + v[k] == 0)
                {
                    cout << v[i] << " , " << v[k]<<endl;
                   
                }
                 k++;
            }
        }
    }

    return 0;
}