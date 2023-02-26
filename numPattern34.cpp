#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++)
    {
        int ans = i + i -1;
        for (int j = 5;j>=i;j--)
        {
            cout<<ans;
            ans = ans + 2;
        }
        cout<<endl;
    }
    
    
    return 0;
}