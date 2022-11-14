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
	
	int s1 = 4;
	cout<<"Element "<<s1;
	
	if(mp1.find(s1) != mp1.end())
		cout<<" : found : value : "<<mp1[s1]<<"\n";
		
	else
		cout<<" not found\n";
		
	int s2 = 5;
	cout<<"Element "<<s2;
	
	if(mp1.find(s2) != mp1.end())
		cout<<" : found : value : "<<mp1[s2]<<"\n";
		
	else
		cout<<" not found\n";
		
	
	mp1.insert({5, 50});
	mp1.insert({8, 60});
	mp1.insert({7, 70});
	
	for(auto itr = mp1.find(3); itr != mp1.end(); itr++){
		cout<<itr->first<<" "<<itr->second<<"\n";
	}
	
	return 0;
}