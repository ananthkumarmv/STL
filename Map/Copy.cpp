#include<iostream>
#include<map>

using namespace std;

int main(){
	
	map<int, int> mp1, mp2;
	
	mp1.insert({4, 40});
	mp1.insert({3, 30});
	mp1.insert({2, 20});
	mp1.insert({1, 10});
	
	mp2.insert(mp1.begin(), mp1.end());
	
	for(auto it = mp2.begin(); it != mp2.end(); it++){
		
		cout<<it->first<<" "<<it->second<<"\n";
		
	}
	
	return 0;
}
