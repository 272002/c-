#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin>>ele;
        a.push_back(ele);
    }
    sort(a.begin(),a.end());
    int ans=0;
    if(n%2==0){
        for (int i = 0; i < n/2; i++)
        {
            ans+=2*abs(a[i]-a[n-i-1]);
        }
        cout<<ans;
    }
    else
    {
        for (int i = 0; i < n/2; i++)
        {
            ans+=2*abs(a[i]-a[n-i-1]);
        }
        cout<<ans;
    }
    
    
}