
#include<bits/stdc++.h>
using namespace std;

void dfs(int n, int m, int stepNum)
{

	if (stepNum <= m && stepNum >= n)
		cout << stepNum << " ";

	if (stepNum == 0 || stepNum > m)
		return ;

	int lastDigit = stepNum % 10;

	int stepNumA = stepNum*10 + (lastDigit-1);
	int stepNumB = stepNum*10 + (lastDigit+1);


	if (lastDigit == 0)
		dfs(n, m, stepNumB);


	else if(lastDigit == 9)
		dfs(n, m, stepNumA);
	else
	{
		dfs(n, m, stepNumA);
		dfs(n, m, stepNumB);
	}
}

// Method displays all the stepping
// numbers in range [n, m]
void displaySteppingNumbers(int n, int m)
{
	// For every single digit Number 'i'
	// find all the Stepping Numbers
	// starting with i
	for (int i = 0 ; i <= 9 ; i++)
		dfs(n, m, i);
}

//Driver program to test above function
int main()
{
	int n = 22, m = 37;

	// Display Stepping Numbers in
	// the range [n,m]
	displaySteppingNumbers(n,m);
	return 0;
}
