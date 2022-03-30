#include<iostream>
#include <forward_list>

using namespace std;

int main(){
	
	forward_list<int> sample = {45, 87, 6};
	
	cout<<"sample: ";
	for(auto it = sample.cbegin(); it!=sample.cend(); it++){
		cout<<*it<<" ";
	}

    return 0;
}


