#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	
	forward_list<int> flist1 = {1, 2, 3,};
	
	forward_list<int> flist2 = {4, 5, 6};
	
	// Using reverse() to reverse 1st forward list
    flist1.reverse();
     
    cout << "The contents of forward list after"
            " reversing are : ";
    for (int &x : flist1)
        cout << x << " ";
    cout << endl << endl;
    
    
    // Displaying forward list before swapping
    cout << "The contents of 1st forward list "
            "before swapping are : ";
    for (int &x : flist1)
        cout << x << " ";
    cout << endl;
     
     
    cout << "The contents of 2nd forward list "
            "before swapping are : ";
    for (int &x : flist2)
        cout << x << " ";
    cout << endl;
    
    // Using of swap() to swap the list
    flist1.swap(flist2);
     
	cout << "The contents of 1st forward list "
            "after swapping are : ";
    for (int &x : flist1)
        cout << x << " ";
    cout << endl;
  
    cout << "The contents of 2nd forward list "
            "after swapping are : ";
    for (int &x : flist2)
        cout << x << " ";
    cout << endl;
    
     
    return 0;
}


