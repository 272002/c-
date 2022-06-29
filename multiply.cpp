#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    
    cout<<"Enter the number of rows in first matrix";
    cin>>a;
    cout<<"Enter the number of columns in first matrix";
    cin>>b;
    int mat1[a][b];
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            int x;
            cin>>x;
            mat1[i][j]=x;
        }
        
    }

    cout<<"Enter the number of rows in second matrix";
    cin>>c;
    cout<<"Enter the number of columns in second matrix";
    cin>>d;
    int mat2[c][d];
    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            int y;
            cin>>y;
            mat2[i][j]=y;
        }
        
    }

    cout<<"first matrix is "<<endl;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
        
    }
     cout<<"Second matrix is "<<endl;
    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
        
    }
    int R[a][d];
    cout << "Multiplication of given two matrices is:\n" << endl;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= d; j++) {
            R[i][j] = 0;
 
            for (int k = 1; k <= c; k++) {
                R[i][j] += mat1[i][k] * mat2[k][j];
            }
 
            cout << R[i][j] << "\t";
        }
 
        cout << endl;
    }
    
    return 0;

}