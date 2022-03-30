#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	
	forward_list<int> flist1 = {1, 2, 3, 2, 3, 3, 1};
	
	flist1.sort();
	
	cout << "The contents of forward list after "
            "sorting are : ";
    for (int &x : flist1)
        cout << x << " ";
    cout << endl;
     
    // removes multiple occurances
    // should be in sorted form
    flist1.unique();
    
    cout << "The contents of forward list after "
            "unique operation are : ";
    for (int &x : flist1)
        cout << x << " ";
    cout << endl;


    return 0;
}


