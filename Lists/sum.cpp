#include<iostream>
#include <list>

using namespace std;

int main(){
	
	int sum = 0;
    list<int> mylist{ 1, 5, 6, 3, 9, 2 };
    
    while(!mylist.empty()){
    	sum += mylist.front();
    	mylist.pop_front();
	}
	
	cout<<sum;
    
    
    return 0;
}


