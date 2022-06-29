#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void swapstring(string *str1,string *str2){
    string temp;
    temp=*str1;
    *str1=*str2;
    *str2=temp;

}
int main(){
    string str1,str2;
    cout<<"Enter string ";
    cin>>str1>>str2;
    swapstring(&str1,&str2);
    cout<<"The swap strings are "<<str1<<" and "<<str2;
    return 0;
}