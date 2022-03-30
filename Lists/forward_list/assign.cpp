#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	forward_list<int> flist1;
	
	forward_list<int> flist2;
	
	// assigning values using assign()
	flist1.assign({1,2,3});
	
	// assingning repeating values using assign()
	// 5 eles with 10 values
	flist2.assign(5,10);
	
	// Displaying forward lists
    cout << "The elements of first forward list are : ";
    for (int& a : flist1)
        cout << a << " ";
    cout << endl;
 
    cout << "The elements of second forward list are : ";
    for (int& b : flist2)
        cout << b << " ";
    cout << endl;

    return 0;
}


