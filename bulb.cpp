//  amazon bulb problem
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //  n => street posting ;k=>position and power
    int n,k, count = 0;
    cin >> k>>n;
    vector<int> a(n + 2, 0);
    int  pos[k+1]=  {0}, power[k+1]={0};
    
    for (int i = 1; i <= k; i++)
    {
        cin >> pos[i];
    }

    for (int i = 1; i <= k; i++)
    {
        cin >> power[i];
    }

    for (int i = 1; i <= k; i++)
    {
        int l = max(1,pos[i] - power[i]);
        int r = min(n,pos[i] + power[i]);
        a[l] += 1;
        a[r + 1] += -1;
    }
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        a[i]+=a[i-1];
    }
    
    
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
        if (a[i] == 0)
        {
            count++;
        }
    }
    cout << endl
         << count << endl;
}