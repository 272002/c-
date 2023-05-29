#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int> p(n+1,0);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int l,r;
        cin>>l>>r;
        p[l]+=2;
        p[r+1]+=-2;
    }
    
    for (int i = 1; i < n; i++)
    {
        p[i]+=p[i-1];
    }
    p[0]+=a[0];
    for (int i = 1; i < n; i++)
    {
        p[i]+=a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}