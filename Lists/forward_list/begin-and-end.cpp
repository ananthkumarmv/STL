#include<iostream>
#include <forward_list>

using namespace std;

int main(){
	
	forward_list<int> flist{1,2,3,4,5};
	
	// using begin to print list
	for(auto it = flist.begin(); it!=flist.end(); ++it)
		cout<<' '<<*it;

    return 0;
}


