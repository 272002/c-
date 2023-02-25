#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++)
    {
        int ans = i;
        for (int j = 1; j <= 5; j++)
        {
            if (i+j<6)
            {
                cout<<i+j;
            }
            else
            {
                cout<<ans;
                ans--;
            }
        }
        cout<<endl;
    }
    
    return 0;
}