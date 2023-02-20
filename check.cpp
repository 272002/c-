#include<iostream>
#include<map>

using namespace std;

void print(map<int ,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first << " " <<pr.second<<endl;
    }
} 

int main(){
// maps store values in sorted order
    map<int ,string> m;
    m[1] = "abc";  // insertion takes O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    map<int ,int> q;
    q[1] = 2;
    q[2] = 3;
    if (q[6] == 0)
    {
        cout<<"yes";
    }
    
    print(m);
    return 0;
}