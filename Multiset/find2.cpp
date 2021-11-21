#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<char> s;
	
	s.insert('a');
    s.insert('a');
    s.insert('a');
    s.insert('b');
    s.insert('c');
    s.insert('a');
    s.insert('a');
    s.insert('c');
    
    cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
        
    // iterator pointing to 
    // position where 2 is
    auto pos = s.find('b');
    
    // prints the set elements
    cout<<"\nThe set elements after b are: ";
    for(auto it = pos; it != s.end(); it++)
    	cout<<*it<<" ";

    return 0;
}


