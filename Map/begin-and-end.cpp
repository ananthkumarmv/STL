#include<iostream>
#include<map>

using namespace std;

int main(){
	
	map<char, int> myMap;
	myMap['a'] = 1;
	myMap['b'] = 2;
	myMap['c'] = 3;
	
	for(auto it = myMap.begin(); it != myMap.end(); it++){
		
		cout<<it->first<<" = "<<it->second<<"\n";
		
	}

	return 0;
}
