#include<iostream>
#include<map>

using namespace std;

int main(){
	
	map<int, int> mp1;
	
	mp1.insert({4, 40});
	mp1.insert({3, 30});
	mp1.insert({2, 20});
	mp1.insert({1, 10});
	
	
	for(auto it = mp1.begin(); it != mp1.end(); it++){
		
		cout<<it->first<<" "<<it->second<<"\n";
		
	}
	
	// return 1 if present else 0
	if(mp1.count(1))
		cout<<"1 is present\n";
	else
		cout<<"1 is not present\n";
	
	
	if(mp1.count(10))
		cout<<"10 is present\n";
	else
		cout<<"10 is not present\n";
	
	return 0;
}
