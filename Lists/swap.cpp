#include<iostream>
#include <list>

using namespace std;

int main(){
	
	list<int> list1 = {1,2,3,4};
	
	list<int> list2 = { 2, 4, 6 };
	
	// Displaying list before swapping
    cout << "The contents of 1st list "
            "before swapping are : ";
    for (int& x : list1)
        cout << x << " ";
    cout << endl;
    
    
    cout << "The contents of 2nd list "
            "before swapping are : ";
    for (int& x : list2)
        cout << x << " ";
    cout << endl;
    
    // using swap() to swap the list
    list1.swap(list2);
    
    // Displaying list after swapping
    cout << "The contents of 1st list "
            "after swapping are : ";
    for (int& x : list1)
        cout << x << " ";
    cout << endl;
  
    cout << "The contents of 2nd list "
            "after swapping are : ";
    for (int& x : list2)
        cout << x << " ";
    cout << endl;

    return 0;
}


