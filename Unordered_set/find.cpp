#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
	
	unordered_set<string> uSet;
	
	uSet.insert("code");
	uSet.insert("in");
	uSet.insert("c++");
	uSet.insert("is");
	uSet.insert("fast");
	
	string key = "slow";
	
	if(uSet.find(key) != uSet.end())
			cout<<"Found "<<key<<"\n\n";
	else
		cout<<key<<" not found\n\n";
		
	key = "c++";
	
	if(uSet.find(key) != uSet.end())
			cout<<"Found "<<key<<"\n\n";
	else
		cout<<key<<" not found\n\n";
		
	
	cout<<"All elements: ";
	unordered_set<string> :: iterator itr;
	
	for(itr = uSet.begin(); itr != uSet.end(); itr++)
		cout<<*itr<<"\n";

	return 0;
}
