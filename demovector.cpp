#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> a;
    //a[0]=5;
     //cout<<a[0];//segmentation fault will be there as vector size is not being given therefore default vector constructor will be call whose size will be zero
    a.push_back(5);//1 unit size has been created
    // cout<<a[0];

    vector<int> b(a);
//     cout<<b[0];
    b[0]=6;
//    cout<<b[0];
    // vector<char> c(a);  compile time error
    vector<char> c(5,66);  //c=​{'B','B','B','B','B'}
    vector<int> d(a.begin(),a.end());
    d.push_back(23);
    // cout<<d[0]<<","<<d[1]<<endl;  //d={5,23} a={5}
    // cout<<a[0]<<","<<a.at(1)<<endl;  //out of range 
    cout<<(a==b)<<endl;
    cout<<(a<d)<<endl;
    vector<int> v(10);
    for (int i = 0; i < 10; i++)
    {
        v[i]=i+1;
    }
    cout<<v.at(6)<<endl;
    cout<<v.back()<<endl;
    vector<int> v1(v);
    v.clear(); //v becomes an empty vector but contain all elements in its memory
    cout<<"v.size() = "<<v.size()<<endl;
    cout<<"v.capacity() = "<<v.capacity()<<endl;
    cout<<v[0]<<endl;
    cout<<v.at(0)<<endl;
    
    return 0;

}