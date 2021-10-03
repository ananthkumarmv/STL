#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pred(int i, int j){
	if(i > j){
		return 1;
	}
	return 0;
}


int main(){
	int i, j;
	
	// Declaring the sequence to be searched into
	vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7 };
	
	// Declaring the subsequence to be searched for
    vector<int> v2 = { 3, 4, 5 };
    
    // Declaring an iterator for sorting the returning pointer
    vector<int>::iterator i1;
    
    // Using std::search and storing the result in
    // iterator i1
    i1 = search(v1.begin(), v1.end(), v2.begin(), v2.end(), pred);
    
    // checking if iterator i1 contains end pointer of v1 or not
    if(i1 != v1.end()){
    	cout<<"vector2 is present at index "<<(i1-v1.begin());
	}
	else {
		cout<<"vector2 is not present in vector1";
	}
	

	return 0;
}
