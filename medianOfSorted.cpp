#include <bits/stdc++.h>
using namespace std;

float getMedian(vector<int> &arr1,vector<int> &arr2,int m,int n){
    int i = 0;
    int j = 0;
    int m1 = -1,m2 = -1;
    for (int count = 0; count <= (m+n)/2; count++)
    {
        m2 = m1;
        if (i<m&&j<n)
        {
            m1 = (arr1[i]<arr2[j])? arr[i++]:arr2[j++];
        }
        else if (i<m)
        {
            m1 = arr1[i++];
        }
        else{
            m1 = arr2[j++];
        }
    }
    if ((m+n)%2!=0)
    {
        return m1;
    }
    return (m1+m2)/2;
}


int main()
{
    vector<int> arr1 = { -5, 3, 6, 12, 15 };
    vector<int> arr2 = { -12, -10, -6, -3, 4, 10 };
	int n1 = arr1.size();
	int n2 = arr2.size();
	cout << getMedian(arr1, arr2, n1, n2);
}

