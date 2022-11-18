#include <iostream>
#include <list>

using namespace std;

void display(list<int> l)
{
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l1, l2;
    for (int i = 1; i <= 10; i++)
    {
        l1.push_back(i);
    }
    for (int i = 5; i <= 15; i++)
    {
        l2.push_back(i);
    }

    display(l1);
    cout<<l1.front()<<" "<<l1.back()<<endl;

    l1.pop_front();
    l2.pop_back();
    display(l1);
    display(l2);

    l1.reverse();
    display(l1);
    l1.sort();
    display(l1);

    l1.swap(l2);
    display(l1);
    display(l2);

    list<int> l3(10,22);
    display(l3);
    l3.resize(7);
    display(l3);

    l3.assign(l2.begin(),l2.end());   // previous elements are deleted and l2 elements are copied
    display(l3);
    cout<<l3.size()<<endl;


    list<int> l4(l3);
    display(l4);
    cout<<(l3==l4)<<endl;
    cout<<(l1>l4)<<endl;

    l4.insert(l4.begin(),2,10);
    display(l4);
    
    l4.clear();
    cout<<l4.size()<<endl;
    cout<<l4.empty()<<endl;
    cout<<l4.max_size()<<endl;

    return 0;
}