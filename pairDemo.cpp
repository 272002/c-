#include <iostream>
#include <vector>
#include <algorithm>
#define f first
#define s second
#define pi pair<int, int>
#define mp make_pair
#define pb push_back
using namespace std;

template <class Pair>
void displayVecPair(const vector<Pair> &v)
{
    cout << "----" << endl;
    for (auto e : v)
    {
        cout << '(' << e.f << ", " << e.s << ')' << endl;
    }
    cout << "Printed " << v.size() << " pairs of the vector!" << endl;
}

bool sortBySecond(const pair<int, string> &a, const pair<int, string> &b)
{
    return (a.s < b.s);
}

bool sortBySecondDes(const pair<int, string> &a, const pair<int, string> &b)
{
    return (a.s > b.s);
}

int main()
{
    // pair<int,int> a;
    pi a;
    a = mp(1, 3);
    cout << a.f << " " << a.s << endl;
    vector<pi> l;
    l.pb(mp(41, 52));
    l.pb({21, 42});
    displayVecPair(l);

    vector<pair<int, string>> v2;
    v2.pb({1, "HEllo"});
    v2.pb({2, "World"});
    v2.pb({3, "Pair"});
    v2.pb({5, "String"});
    v2.pb({4, "Queue"});

    sort(v2.begin(), v2.end());
    displayVecPair(v2);

    sort(v2.begin(), v2.end(), sortBySecond);
    displayVecPair(v2);

    sort(v2.begin(), v2.end(), sortBySecondDes);
    displayVecPair(v2);
    return 0;
}