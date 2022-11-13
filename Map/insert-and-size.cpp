#include<iostream>
#include<map>

using namespace std;

int main(){
	
	map<int, string> map1, map2;
	
	
	// way-1
	map1.insert(make_pair(1, "India"));
    
    // way-2
    map1.insert({ 2, "Nepal"});
    
    // way-3
    map1[3] = "Sri Lanka";
    
    // way-4
    map1.insert(pair<int, string>(4, "Myanmar"));
    
    cout<<map1.size()<<"\n";
    cout<<map2.size()<<"\n";
    
    for(auto it = map1.begin(); it != map1.end(); it++)
		cout<<it->first<<" = "<<it->second<<"\n";
		

	return 0;
}
