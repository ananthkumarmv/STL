#include<iostream>
#include<map>

using namespace std;

int main(){
	
	map<int, string> map1;
	
	map1.insert(make_pair(1, "India"));
    
    if(map1.empty())	
    	cout<<"Yes";
    else
    	cout<<"No";

	return 0;
}
