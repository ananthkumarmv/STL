#include<iostream>
#include<list>

using namespace std;

int main(){
	
	list<int> list1 = {1, 2, 3};
	
	list<int> list2 = {2, 4, 6};
	
	// using merge function to merge list1 and list2
	list1.merge(list2);
	
	cout<<"list1 after merge operation is: ";
	for(int& x: list1)
		cout<<x<<" ";       // 1 2 2 3 4 6
	cout<<"\n";
	
	// using remove_if() to remove odd elements
	// removes 1 and 3
	list1.remove_if([](int x){ return x%2 !=0; });
	
	// Displaying list elements
    cout << "list1 after remove_if operation is : ";
    for (int& x : list1)
        cout << x << " ";   // 2 2 4 6
    cout << endl;

    return 0;
}


