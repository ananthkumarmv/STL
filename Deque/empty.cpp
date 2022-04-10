#include<iostream>
#include <deque>

using namespace std;

int main(){
	deque<int> mydeque;
	mydeque.push_front(1);
	
	//deque becomes 1
	if(mydeque.empty()){
		cout<<"True";
	}
	else{
		cout<<"False";
	}


    return 0;
}


