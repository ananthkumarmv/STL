// C++ program to demonstrate the
// multiset::insert(iterator, element) function

#include<iostream>
#include<set>

using namespace std;

int main(){
	
	multiset<int> s;
	
	// function to insert elements
	// in the set container
	auto itr = s.insert(s.begin(), 1);
	
	// the time taken to insertion
	// is very less as the correct
	// position for insertion is given
	
	itr = s.insert(itr, 4); 
	itr = s.insert(itr, 1);
	itr = s.insert(itr, 5);
	
	// slow insertion as position is
	// not given correctly
	itr = s.insert(s.begin(), 3);
	
	for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    return 0;
}


