#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
	
	// declaring unordered multiset gfg
	unordered_multiset<int> gfg;
	unsigned int max_elements;
	
	// calculating the max size of multiset gfg
	max_elements = gfg.max_size();
	
	cout << "Number of elements "
         << "the multiset can hold is: "
         << max_elements << endl;


    return 0;
}


