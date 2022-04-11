#include<iostream>
#include<stack>

using namespace std;

int main(){
	
	stack<int> mystack;
	mystack.emplace(1);
	mystack.emplace(2);
	mystack.emplace(3);
	mystack.emplace(4);
	mystack.emplace(5);
	mystack.emplace(6);
	
	cout << "mystack = ";
  	while (!mystack.empty()) {
    	cout << mystack.top() << " ";
    	mystack.pop();
    }

    return 0;
}


