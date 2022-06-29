#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the number of rows ";
    cin>>r;
    cout<<"enter the number of colomns ";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=i;j<=c;j++){
            cout<<j;
        }
        for(int j=i;j>1;j--){
            cout<<c;
        }
        printf("\n");
    }
    return 0;
}