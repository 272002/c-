#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,k=1;
    cout<<" Enter the size of square matrix "; //size of square matrix must be even
    cin>>n;
    int m[n][n];

    int left, top;

    left = 1;
    top  = n;
 

    for(i=1; i<=n/2; i++)  //shows the number of spiral form
    {
        // Fill from left to right
        for(j=left; j<=top; j++)
        {
            m[left][j] = k;
            k++;
        }

        // Fill from top to down
        for(j=left+1; j<=top; j++)
        {
            m[j][top] = k;
            k++;
        }

        // Fill from right to left
        for(j=top-1; j>=left; j--)
        {
            m[top][j] = k;
            k++;
        }

        // Fill from down to top
        for(j=top-1; j>=left+1; j--)
        {
            m[j][left] = k;
            k++;
        }
        left++; 
        top--;
    }
   
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
           printf("%-5d", m[i][j]);
        }
        cout<<endl;
    }
    
    return 0;
}