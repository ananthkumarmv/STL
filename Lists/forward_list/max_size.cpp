#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	forward_list<int> f;
	
	// print max number of values that 
    // can be held by forward_list
    
    cout<<"Max_size of the list is "<<f.max_size()<<endl;

    return 0;
}


