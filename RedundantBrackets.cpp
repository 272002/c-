#include <bits/stdc++.h>
using namespace std;

bool check(string &str)
{
	stack<char> st;
	for (auto it : str)
	{
		if (it == ')')
		{
			char tp = st.top();
			st.pop();
			// if open parenthesis found
			bool flag = true;
			while (!st.empty() && tp != '(')
			{
				if (tp == '+' || tp == '-' || tp == '*' || tp == '/')
				{
					flag = false;
				}
				tp = st.top();
				st.pop();
			}
			if (flag == true)
			{
				return true;
			}
		}
		else
		{
			st.push(it);
		}
	}
	return false;
}

void findRedundant(string &str)
{
	bool ans = check(str);
	if (ans == true)
	{
		cout << "YES redundant" << endl;
	}
	else
	{
		cout << "NO redundant" << endl;
	}
}

int main()
{
	string str;
	cin >> str;
	findRedundant(str);
	return 0;
}
