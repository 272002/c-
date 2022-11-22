#include <iostream>
#include <map>
using namespace std;

void print(map<char, int> u)
{

    for (auto x : u)
    {
        cout << x.first << " , " << x.second << endl;
    }
    cout << "printed " << u.size() << " elements succesfully " << endl;
}

class comp
{
public:
    bool operator()(char a, char b)
    {
        return a > b;
    }
};

void display(map<char, int, comp> u)
{

    for (auto x : u)
    {
        cout << x.first << " , " << x.second << endl;
    }
    cout << "printed " << u.size() << " elements succesfully " << endl;
}

void multiprint(multimap<char, int> u)
{

    for (auto x : u)
    {
        cout << x.first << " , " << x.second << endl;
    }
    cout << "printed " << u.size() << " elements succesfully " << endl;
}

int main()
{
    map<char, int> u;
    u.insert({'a', 1});
    // cout << u['a'] << endl;
    u.insert({'b', 2});
    // u.insert({'d', 4});

    u.insert(make_pair('g', 45));
    u.insert({'c', 3});
    // print(u);

    u.erase('a');
    // print(u);
    auto it = u.begin();
    ++it;
    ++it;
    u.insert(it, {'d', 56}); // no effect of iterator/position , since it is ordered

    // print(u);
    // cout << u['y'] << endl; // return value after the last value generally garbage value as the key vaue is not present

    // if(u.find('T')==u.end()){
    //     cout<<"Key not found "<<endl;
    // }
    // else
    // {
    //     cout<<"Key found "<<endl;
    // }

    map<char, int, comp> v; // descending order of keys...
    v.insert(u.begin(), u.end());  // insert only when keys have their values
    // display(v);

    multimap<char, int> m;
    m.insert({'a', 23});
    m.insert({'a', 25});
    m.insert({'a', 3});
    m.insert({'n', 903});
    multiprint(m);
    // m.erase('a');  // all ocurrences will be deleted
    // multiprint(m);

    // multimap<char, int>::iterator itr;
    auto res = m.equal_range('a');
    for (auto itr = res.first; itr != res.second; itr++)
    {
        cout << (*itr).second << " " << endl; // cout<<it->second<<endl;
    }

    return 0;
}