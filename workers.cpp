// question timestamp => 10:25am
// workers 
//  odd numbers of workers are given
#include <bits\stdc++.h>
using namespace std;

int costcome(vector<int> k)
{
    sort(k.begin(), k.end());
    int sum = 0;
    for (int i = 0; i < k.size(); i += 2)
    {
        sum += k[i+1] - k[i ];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> employee(n);
    for (int i = 0; i < n; i++)
    {
        cin >> employee[i];
    }
    int leaveEmployee;
    cin >> leaveEmployee;
    vector<int> employeeleft;
    for (int i = 0; i < n; i++)
    {
        if (i == leaveEmployee)
        {
            continue;
        }
        employeeleft.push_back(employee[i]);
    }
    cout << costcome(employeeleft);
    return 0;
}
