#include<iostream>
using namespace std;

int main(){
    int n;
    printf("Enter the no. of sides");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
         for (int j=n-i-1;j>0;j--)
         { 
            printf(" ");
         }
         for (int k = 0; k<i+1  ; k++)
         {  if(k==0||i==k||i==n-1)
             printf("*");
             else
             printf(" ");
         }
         printf("\n");
         
    }
    return 0;
}