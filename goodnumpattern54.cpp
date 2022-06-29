#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,digits,firstDigit, placeValue;
    cout << "Enter the number";
    cin >> n;
    while (n!=0){
        cout<<n<<endl;
        digits = (int) log10(n);                // Get total number of digits
        placeValue = (int) ceil(pow(10, digits)); // Get the place value of first digit
        firstDigit = (int)(n / placeValue);     // Get the first digit

        n = n - (placeValue * firstDigit);
    }
return 0;
}