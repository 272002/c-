#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono> // helps in calculating time
#include <vector>

using namespace std;
using namespace std::chrono;

void display(unordered_map<char, int> &u)
{
    cout << "Printed contents of unordered maps " << endl;
    for (auto p : u)
    {
        cout << p.first << "\t:\t" << p.second << endl;
    }
    cout << "Size is " << u.size() << endl;
}

int main()
{
    /*
    unordered_map<char, int> u;
    u['a'] = 1;   // insertion
    u['a'] = 2;   // updation
    // cout << u.size() << endl;
    u['b'] = 90;
    u['d'] = 89;
    u.insert({'c',5});
    u.insert({'g',56});
    // display(u);
    // u.insert({'a',77});  // insert function cannot work as update to do this erase he key and value first
    u.erase('a');
    u.insert({'a',77});
    display(u);

    if (u.find('b')==u.end())
    {
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }

    */

    // Time comparison b/w map and unordered_map ---

    map<double, double> g;
    unordered_map<double, double> h;
    for (double i = 0; i < 1000000; i++)
    {
        g.insert({i, i + 1.0});
        h.insert({i, i + 1.0});
    }

    srand(time(0));
    double x = rand() % 2000000; // b/w 0 to 1000000

    vector<double> randElem;
    for (double i = 0; i < 1000; i++)
    {
        randElem.push_back(rand() % 2000000);
    }

    cout << "Finding " << 1000 << " in both map and unordered_map" << endl;

    //-- Time taken by map to find x
    auto start = high_resolution_clock::now();
    for (auto x : randElem)
        g.find(x);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "Average Time taken by map is =  " << duration.count() / 1000 << " nanoseconds" << endl;

    //-- Time taken by unordered_map to find x

    start = high_resolution_clock::now();
    for (auto x : randElem)
        h.find(x);
    stop = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(stop - start);

    cout << "Average Time taken by unordered map is =  " << duration.count() / 1000 << " nanoseconds" << endl;

    return 0;
}