#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = { 15, 10, 15, 11, 10 };
 
    // initializes the set from an array
    multiset<int> s(arr, arr + 5);
 
    // prints all elements in set
    cout << "The elements in multiset are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
 
    cout << "\nThe size after clear() is: ";
 
    // erases all elements
    s.clear();
    cout << s.size();
 
    return 0;
}

