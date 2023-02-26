#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++)
    {
        int ans1 = 1;
        for (int j = 1; j <= 10; j++)
        {
            if (j<=i)
            {
                cout<<ans1;
                ans1 = ans1 + 1;
            }
            else if (j>10-i)
            {
                cout<<ans1-1;
                ans1 = ans1 - 1;
            }   
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}