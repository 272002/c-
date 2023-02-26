#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int ans = i+2;
        if (i > 1)
        {
            for (int j = i - 1; j > 0; j--)
            {
                cout<<ans;
                ans = ans + 1;
            }
        }
        ans = 2*i + 1;
        for (int j = 2 * i; j >= i; j--)
        {
            cout << ans;
            ans = ans - 1;
        }
        
        cout<<endl;
    }

    return 0;
}