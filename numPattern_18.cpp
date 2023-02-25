#include <iostream>
using namespace std;

int main()
{
    // 1st half
    int ans2=5;
    for (int i = 1; i <= 5; i++)
    {
        int ans1 = 5,ans3 = 5-i+1;
        for (int j = 1; j <= 9; j++)
        {
            // 1st part
            if (i>=j)
            {
                cout<<ans1<<" ";
                ans1--;
            }

            // 2nd part
            else if (j>i&&j<=9-i)
            {
                cout<<ans2<<" ";
            }

            // 3rd part
            else
            {
                if (i==5)
                {
                    cout<<ans3+1<<" ";
                }
                else
                {
                    cout<<ans3<<" ";
                }
                
                
                ans3++;
            }
        }
        ans2--;
        cout<<endl;
    }

    // 2nd half
    int ans4=2;
    for (int i = 1; i < 5; i++)
    {
        int ans1 = 5,ans3=i+1;
        for (int j = 1; j <= 9; j++)
        {
            // 1st part
            if (j<5&&ans1>i)
            {
                cout<<ans1<<" ";
                ans1--;
            }

            // mid part
            else if(j<5+i)
            {
                cout<<i+1<<" ";
            }
            
            //2rd part
            else if (j>5&&ans3<6)
            {
                cout<<ans3<<" ";
                ans3++;
            }
        }
        cout<<endl;
        
    }
    

    
    return 0;
}