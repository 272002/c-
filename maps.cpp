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

    m.insert({4,"afg"});
    // map<int ,string> ::iterator it;
    // for(it = m.begin();it!= m.end();it++){
    //     cout<<(*it).first << " "<<(*it).second<<endl;
    // }
    // for(auto &pr : m){
    //     cout<<pr.first << " " <<pr.second<<endl;
    // }
    
    // print(m);

    
    // auto it  = m.find(7);  //find operation returns the iterator and find operation takes O(log(n))
    // if (it == m.end())
    // {
    //     cout<<"No value";
    // }
    // else{
    //     cout<<(*it).first << " "<<(*it).second<<endl;
    // }

    // m.erase(3); //O(log(n))
    auto it  = m.find(5);  //O(log(n))
    m.erase(it);
    print(m);
    return 0;
}