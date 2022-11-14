#include<iostream>
#include<map>

using namespace std;

int main(){
	
	map<int, int> mp;
	
	mp.insert({4, 40});
	mp.insert({3, 30});
	mp.insert({2, 20});
	mp.insert({1, 10});
	
	for(auto it = mp.begin(); it != mp.end(); it++){
		
		cout<<it->first<<" "<<it->second<<"\n";
		
	}
	
	mp.erase(1);
	
	cout<<"\n\nAfter erasing key 1:\n";
	
	for(auto it = mp.begin(); it != mp.end(); it++){
		
		cout<<it->first<<" "<<it->second<<"\n";
		
	}
	
	
	auto it = mp.find(2);
	
	mp.erase(it);
	
	cout<<"\n\nAfter erasing 2:\n";
	
	for(auto it = mp.begin(); it != mp.end(); it++){
		
		cout<<it->first<<" "<<it->second<<"\n";
		
	}
	
	
	// inserting eles in rondom order
	mp.insert({7, 70});
	mp.insert({5, 50});
	mp.insert({8, 80});
	mp.insert({6, 60});
	
	cout<<"\n\nAfter inserting 6, 7, 8 keys:\n";
	
	for(auto it = mp.begin(); it != mp.end(); it++){
		
		cout<<it->first<<" "<<it->second<<"\n";
		
	}
	
	map<int, int>::iterator it1 = mp.find(4);
	map<int, int>::iterator it2 = mp.find(100);
	
	mp.erase(it1, it2);
	cout<<"\n\nAfter erasing in range:\n";
	
	for(auto it = mp.begin(); it != mp.end(); it++){
		
		cout<<it->first<<" "<<it->second<<"\n";
		
	}
	

	return 0;
}
