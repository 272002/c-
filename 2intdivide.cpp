#include <bits/stdc++.h>
using namespace std;
long long int divide(long long int dividend, long long int divisor)
{
	if (dividend == 0)
		return 0;
	if (divisor == 0)
	{
		cout << "Division by 0 is impossible\n";
		return 0;
	}

	long long int sign = (dividend < 0) ^ (divisor < 0);

	dividend = abs(dividend);
	divisor = abs(divisor);
	if (divisor == 1)
		return ((sign == 0) ? dividend : -dividend);

	long long int ans = exp(log(dividend) - log(divisor)) + 0.0000000001;

	return ((sign == 0) ? ans : -ans);
}
int main()
{
	int a = 10, b = 3;
	cout << divide(a, b) << '\n';
	a = 41, b = -8;
	cout << divide(a, b) << '\n';
	return 0;
}

