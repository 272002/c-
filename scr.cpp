#include <iostream>
using namespace std;
int m = 10;
int main()
{
    int m = 20;
    {
        int k = m;
        int m = 30;
        cout << "We are in inner block";
        cout << "K=" << k << endl
             << "m=" << m << endl
             << "::m=" << ::m << endl;
    }
    cout << "We are in the outer block";
    cout << "m=" << m << endl
         << "::m=" << ::m << endl;
    return 0;
}