#include<iostream>
#include<set>
using namespace std;

int main(){
	
	set<int> s1, s2;
	
	s1.insert(1);
	
	
	// if set already contains elements
	cout<<s1.max_size()<<endl;
	
	// if set does not have elements 
	cout<<s2.max_size();

    return 0;
}


