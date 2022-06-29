#include <iostream>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;

    for(int i=1; i<=rows; i++)
    {
        for(int j=cols; j>cols-i; j--)
        {
            cout<<j;
        }

        for(int j=1; j<=cols-i; j++)
        {
            cout<<(rows - i + 1);
        }

        printf("\n");
    }
    return 0;

}