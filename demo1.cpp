#include <iostream>
using namespace std;
int main()
{
    int currentNumber = 10; // Start with 10
    for (int i = 1; i <= 4; i++)
    {
        for(int j = 1;j<=i;j++){
            cout<<currentNumber<<" ";
            currentNumber--;
        }
        
        cout<<endl;
    }

    return 0;
}
