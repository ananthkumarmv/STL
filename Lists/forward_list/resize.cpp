#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	
	forward_list<int> fl = { 10, 20, 30, 40, 50 };
	
	
    cout << "The contents of forward list :";
    for (auto it = fl.begin(); it != fl.end(); ++it)
        cout << *it << " ";
  
    cout << endl;
    
    // resize to 7
    fl.resize(7);
    
    cout << "The contents of forward list :";
    for (auto it = fl.begin(); it != fl.end(); ++it)
        cout << *it << " ";      // 10 20 30 40 50 0 0
        
    cout << endl;
	
	
	fl.resize(3);
	
	cout << "The contents of forward list after reducing the current size:";
    for (auto it = fl.begin(); it != fl.end(); ++it)
        cout << *it << " ";     // 10 20 30
	
    return 0;
}


