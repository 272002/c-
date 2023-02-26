#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int ans = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= pow(2, i - 1); j++)
        {
            if (ans < 10)
            {
                cout << ans;
                ans = ans + 1;
            }
            else
            {
                ans = 1;
                cout << ans;
                ans = ans + 1;
            }
        }
        cout << endl;
    }

    return 0;
}