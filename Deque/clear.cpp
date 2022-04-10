#include<iostream>
#include <deque>

using namespace std;

int main(){
	
	deque<int> mydeque{ 1, 2, 3, 4, 5 };
	for(auto it = mydeque.begin(); it != mydeque.end(); ++it){
		cout<<*it<<" ";
	}


	mydeque.clear();
	cout<<"\nAfter clear: ";
	for(auto it = mydeque.begin(); it != mydeque.end(); ++it){
		cout<<*it<<" ";
	}


    return 0;
}


