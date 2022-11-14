#include<iostream>
#include<map>

using namespace std;

int main(){
	
	map<int, int> mp;
	
	mp.insert({4, 40});
	mp.insert({3, 30});
	mp.insert({2, 20});
	mp.insert({1, 10});
	
	cout<<"Before: "<<mp.size()<<"\n";
	
	mp.clear();
	
	cout<<"After: "<<mp.size()<<"\n";
	

	return 0;
}
