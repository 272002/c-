#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> vec;
    v1.push_back(12);
    v1.push_back(90);
    v1.push_back(78);
    v1.push_back(66);
    for (int i = 0; i < v1.size(); i++)
    {
        v1.pop_back();
        cout<<v1[i]<<" ";
    }
    cout<<v1.size()<<endl;
    v1.resize(56);
    cout<<v1.size();
    cout<<"The max size vector vec can hold = "<<vec.max_size()<<endl;
    
    return 0;
}