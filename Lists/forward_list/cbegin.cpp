#include<iostream>
#include <forward_list>

using namespace std;

int main(){
	
	forward_list<int> sample = {45, 87, 6};
	
	cout<<"1st ele of sample: ";
	cout<<*sample.cbegin();

    return 0;
}


