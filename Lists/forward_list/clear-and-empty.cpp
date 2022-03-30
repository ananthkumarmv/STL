#include<iostream>
#include<forward_list>
using namespace std;

int main(){
	 
	forward_list<int> flist1 = {1, 2, 3,};
	
	cout << "The contents of forward list  are : ";
    for (int &x : flist1) 
        cout << x << " ";
    cout << endl;
    
    // Using clear() to clear the forward list 
    flist1.clear();
    
    cout << "The contents of forward list after "
        << "clearing are : ";
    for (int &x : flist1) 
        cout << x << " ";
    cout << endl;
    
    flist1.empty() ? cout << "Forward list is empty" : 
                     cout << "Forward list is not empty";

    return 0;
}


