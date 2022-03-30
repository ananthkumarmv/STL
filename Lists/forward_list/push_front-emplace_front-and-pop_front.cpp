#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	
	forward_list<int> flist = { 10, 20, 30, 40, 50 };
	
	flist.push_front(60);
	
	cout
		<<"the forward list after push_front operation: ";
	for(int &c: flist)
		cout<<c<<" ";        // 60 10 20 30 40 50
	cout<<endl;
	
	// inserting value using emplace_front()
	// inserts 70 at front
	flist.emplace_front(70);
	
	cout
		<<"the forward list after emplace_front operation: ";
	for(int &c: flist)
		cout<<c<<" ";       // 70 60 10 20 30 40 50
	cout<<endl;
	
	// deleting frist value using pop_front()
	// pops 70
	flist.pop_front();
	
	// Displaying the forward list
    cout << "The forward list after pop_front operation : ";
    for (int& c : flist)
        cout << c << " ";  // 60 10 20 30 40 50
    cout << endl; 

    return 0;
}


