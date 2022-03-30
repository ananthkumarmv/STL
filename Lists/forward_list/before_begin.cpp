#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	
	forward_list<int> fl = { 20, 30, 40, 50 };
	
	// performing before_begin function
	auto it = fl.before_begin();
	
	// inserting element before the first element
	fl.insert_after(it, 10);
	
	cout<<"Element of the list are: "<<endl;
	
	for(auto it = fl.begin(); it!= fl.end(); it++)
		cout<<*it<<" ";
		

    return 0;
}


