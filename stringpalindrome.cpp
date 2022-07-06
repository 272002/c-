#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
     int flag=0;
    cin>>str;
    int h=str.length();
    int l=0;
    char s[h];
    strcpy(s,str.c_str()); //The c_str() function is used to return a pointer to an array that contains a null terminated sequence of character representing the current value of the string.
   
    cout<<endl;
    
   
    while ((l<h))
    {
        if(s[l++]!=s[--h]){
            flag=1;
        }
    }
    if(flag==1){
        cout<<str<<" is not a palindrome ";
    }
    else{
        cout<<str<<" is a palindrome" ;
    }
    


    return 0;

}