#include<iostream>
#include <forward_list>
using namespace std;

int main(){
	
	int sum=0;
	forward_list<int> myforwardlist{1, 5, 6, 3, 9, 2};
	
	while(!myforwardlist.empty()){
		sum = sum + myforwardlist.front();
		myforwardlist.pop_front();
	}
	
	cout<<sum;

    return 0;
}


