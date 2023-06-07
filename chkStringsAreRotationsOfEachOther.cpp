// #include<iostream>
// #include<string>
// #include<map>
// #include<set>
#include<bits\stdc++.h>
using namespace std;

// method 1
// bool chk(string s1,string s2){
//     if(s1.size()!=s2.size())return false;
//     string temp = s1+s1;
//     if (temp.find(s2)!=string::npos)
//     {
//         return true;
//     }
//     return false;
    
// }


// method 2
bool chk(string s1,string s2){
    if(s1.size()!=s2.size())return false;
    map<char,int>m1,m2;
    set<int>s;
    int a;
    for (int i = 0; i < s1.length(); i++)
    {
        m1[s1[i]] = i;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        s.insert(abs(i-m1[s2[i]]));
    }
    if (s.size() == 1)
    {
        return true;
    }
    return false;
    
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(chk(s1,s2)){
        cout<<"Strings are rotations of each other "<<endl;
    }
    else
    {
        cout<<"Strings are not rotations of each other "<<endl;
    }
    
    return 0;
}