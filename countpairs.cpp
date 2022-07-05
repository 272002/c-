#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, count = 0;
    vector<int> v1;
    vector<int> v2;
    cout << "Enter the size of 2 arrays ";
    cin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    cout<<"The 2 arrays are "<<endl;

    vector<int>::iterator it1,it2;
    
    for (it1 = v1.begin(); it1 != v1.end(); it1++){
        cout<<*it1<<" ";
    }
    cout<<endl;
    for (it2 = v2.begin(); it2 != v2.end(); it2++){
        cout<<*it2<<" ";
    }
    cout<<endl;
    for (it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        for (it2 = v2.begin(); it2 != v2.end(); it2++)
        {
            if (pow(*it1, *it2) > pow(*it2, *it1))
            {
                count++;
            }
        }
    }
    cout<<"number of pairs (x, y) in an array such that x^y > y^x are   "<<count;

    return 0;
}