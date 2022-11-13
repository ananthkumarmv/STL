#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
	
	unordered_set<string> mySet = { "first", "third"};
	
	string myString = "tenth";
	
	mySet.insert(myString);
	
	for(const string& x : mySet){
		cout<<x<<" ";
	}

	return 0;
}
