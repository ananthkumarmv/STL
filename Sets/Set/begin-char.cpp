#include<iostream>
#include <set>

using namespace std;

int main(){
	
	set<char> myset{ 'a', 'c', 'g', 'z'};
	
	for(auto it=myset.begin(); it!=myset.end(); ++it){
		cout<<*it<<" ";
	}

    return 0;
}


