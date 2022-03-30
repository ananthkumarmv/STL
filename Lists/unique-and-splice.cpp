#include<iostream>
#include <list>

using namespace std;

int main(){
	
	list<int> list1 = { 1, 1, 1, 2, 2, 3, 3, 4 };
	
	list<int> list2 = { 2, 4, 6 };
	
	list<int>::iterator it = list1.begin();
	
	// using advance() to increment iterator position
	advance(it, 3);
	
	// displaying list elements
	cout << "list1 before unique operation is : ";
    for (int& x : list1)
        cout << x << " ";
    cout << endl;
    
    // using unique() to remove repeating elements
    // elements should be in sorted order
    list1.unique();
    
    // Displaying list elements
    cout << "list1 after unique operation is : ";
    for (int& x : list1)
        cout << x << " ";
    cout << endl << endl;
    
    
    // using splice() to splice list2 in list1 at position
    // it inserts list2 after 2nd position
    list1.splice(it, list2);
    
    // Displaying list elements
    cout << "list1 after splice operation is : ";
    for (int& x : list1)
        cout << x << " ";
    cout << endl;
    
    return 0;
}


