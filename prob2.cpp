//  to calculate subarray sum
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> psum(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        i == 0 ? psum[i] = a[i] : psum[i] = psum[i - 1] + a[i];
    }

    int givenindex,targetsum;

    cin>>givenindex>>targetsum;
    for (int i = 0; i < givenindex; i++)
    {
        if (psum[i] == psum[givenindex] - targetsum)
        {
            cout<<i+1<<" ";
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    // return 0;
}