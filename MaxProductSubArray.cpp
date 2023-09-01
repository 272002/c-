#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ele, cpos = 0, cneg = 0;
    cin >> n;
    int prod = 1;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        a.push_back(ele);
        if (ele > 0)
        {
            cpos++;
        }
        else if (ele < 0)
        {
            cneg++;
        }
        if (ele == 0)
        {
            prod = 0;
        }
    }
    if (cneg % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            prod *= a[i];
        }
    }
    else
    {
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0 && cneg > 1)
            {
                prod *= a[i];
                cneg--;
            }
            else if(a[i]>0)
            {
                prod *= a[i];
            }
        }
    }
    cout << prod << endl;

    return 0;
}