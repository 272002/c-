#include<iostream>
#include<set>
#define F first
#define S second
#define pi pair<int,int>
using namespace std;

class comp{
    public:
    bool operator() (const pi &a,const pi &b){
        return a.S < b.S;
    }
};


int main(){
    set<int> s1;
    s1.insert(4);
    s1.insert(5);
    s1.insert(3);
    // for (auto i : s1)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    s1.insert(3);
    // for (auto i : s1)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // auto it = s1.find(4);
    // s1.erase(s1.begin(),it);
    // for (auto i : s1)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // set<pi> s2;
    // s2.insert({1,2});
    // s2.insert({0,3});
    // s2.insert({1,0});
    // s2.insert({5,1});

    // for(auto i : s2)
    // cout<<i.F<<","<<i.S<<endl;

    set<pi,comp> s2;
    s2.insert({1,2});
    s2.insert({0,3});
    s2.insert({1,0});
    s2.insert({5,1});

    for(auto i : s2)
    cout<<i.F<<","<<i.S<<endl;  //ascending order of there second values

    return 0;
}