#include<bits/stdc++.h>
using namespace std;

void square(int n){
    if(n<0){
        n = -n;
    }
    int tmp = n;
    int result = 0,power=0;
    while(tmp){
        if(tmp&1){
            result+=n<<power;
        }
        power++;
        tmp= tmp>>1;
    }
    cout<<result;
}

int main(){
    int n;
    cin>>n;
    square(n);
}