#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int basic = 890, allowance = 89, total = 1023;
    cout << setw(1) << "Basic " << setw(1) << basic << endl;
    cout << setw(10) << "Allowance " << setw(10) << allowance << endl;
    cout << setw(10) << "Total " << setw(10) << total << endl;
    return 0;
}
