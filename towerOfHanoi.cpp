#include <iostream>
using namespace std;

void TOH(int n, char Beg, char Aux, char End)
{
    if (n == 0)
    {
        return;
    }
    TOH(n - 1, Beg, End, Aux);
    cout << "Move disk " << n << " from rod " << Beg
         << " to rod " << End << endl;
    TOH(n - 1, Aux, Beg, End);
}

int main()
{
    int n;
    cin >> n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}