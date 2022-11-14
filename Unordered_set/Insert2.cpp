#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
	
	unordered_set<string> mySet = { "first", "third", "second"};
	
	unordered_set<string> myArray = {"tenth", "seventh"};
	
	string myString = "ninth";
	
	mySet.insert(myString);
	
	mySet.insert(myArray.begin(), myArray.end());
	
	mySet.insert({ "fourth", "sixth" });
	
	for(const string& x : mySet){
		cout<<x<<" ";
	}
	
	return 0;
}
