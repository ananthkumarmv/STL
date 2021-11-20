#include<iostream>
#include<set>

using namespace std;

int main(){
	set<char> myset{'A', 'b'};
	
	if(myset.empty()){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	
    return 0;
}


