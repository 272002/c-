#include<iostream>
using namespace std;


int main(){
    double num;
    int n;
    cin>>num>>n;
    double ans = 1;
    while(n>0){
        if(n%2!=0){
            ans = ans * num;
            n--;
        }
        else
        {
            num = num * num;
            n = n/2;
        }
    }
    cout<<ans<<endl;
    return 0;
}