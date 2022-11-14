#include<iostream>
#include<set>
using namespace std;

int main(){
	
	// Initialize multiset
	multiset<int> s;
	
	s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    
    cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    
    // iterator pointing to
    // position where 2 is
    auto pos = s.find(3);
    
    // prints the set elements
    cout << "\nThe set elements after 3 are: ";
    for (auto it = pos; it != s.end(); it++)
        cout << *it << " ";
        
    
    return 0;
}


