#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	
	forward_list<int> flist = {10,20,30};
	
	forward_list<int>::iterator ptr;
	
	// inserting value using insert_after()
	// starts insertion from second position
	ptr = flist.insert_after(flist.begin(), {1,2,3});
	
	cout<<"The forward list after insert_after operation: ";
	for(int& c: flist)
		cout<<c<<" ";        // 10 1 2 3 20 30
		
	cout<<endl;
	
	// inserting value using emplace_after()
	// inserts 2 after ptr
	ptr = flist.emplace_after(ptr, 2);
	
	// Displaying the forward list
    cout << "The forward list after emplace_after "
            "operation : ";
    for (int& c : flist)
        cout << c << " ";    // 10 1 2 3 2 20 30
    cout << endl;
    
    // Deleting value using erase_after Deleted 2
    // after ptr
    ptr = flist.erase_after(ptr);
     
    cout << "The forward list after erase_after operation "
            ": ";
    for (int& c : flist)
        cout << c << " ";     // 10 1 2 3 2 30
    cout << endl;

    return 0;
}


