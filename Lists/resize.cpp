#include <iostream>
#include <list>
using namespace std;
  
int main()
{
    list<int> mylist{ 1, 2, 3, 4, 5 };
    mylist.reverse();
    
    mylist.resize(7);
    
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;       //  5 4 3 2 1 0 0
    cout<<endl;
    
    mylist.resize(4);
    
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;       //  5 4 3 2 1 0 0
    cout<<endl;
    
    mylist.resize(8, 50);
    
    
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;      //   5 4 3 2 50 50 50 50
}

