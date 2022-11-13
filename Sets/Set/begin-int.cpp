#include<iostream>
#include <set>

using namespace std;

int main(){
	
	set<int> myset{1,2,3,4,5};
	
	for(auto it = myset.begin(); it != myset.end(); ++it){
		cout<<" "<<*it;
	}

    return 0;
}


