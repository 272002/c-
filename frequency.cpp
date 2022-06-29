// Given an array of size n and a number k, find all elements that appear more than n/k times

#include <bits/stdc++.h>
using namespace std;

void morethanNbyK(int p[],int m,int k){
    for(int i = 0; i < m; i++)    
    {    
      for(int j = i+1; j < m; j++)    
        {    
            if(p[j] < p[i])    
            {    
                int temp = p[i];    
                p[i] = p[j];    
                p[j] = temp;     
            }     
        }     
    }     
    int t=m/k,count=0;
    for (int i = 0; i < m; i++)
    {
       
    }
    

}

int main()
{
    int m,k;

    cout << "Enter the size of array " << endl;
    cin >> m;
    int p[m];

    cout << "Enter elements of array  ";

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        p[i] = x;
    }
    cout<<"Enter the value of k "<<endl;
    cin>>k;
    morethanNbyK(p,m,k);
   
    return 0;
}