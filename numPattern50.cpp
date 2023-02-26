#include<iostream>
using namespace std;

int main(){
    int ans = 1,k=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            cout<<ans<<" ";
            
            ans = ans + k;
            k++;
        }
        cout<<endl;
    }
    
    return 0;
}