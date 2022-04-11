#include<iostream>
#include<stack>

using namespace std;

int main(){
	
	stack<int> s1, s2;
	
	s1.push(1);
	s1.push(2);
	s1.push(3);
	
	s2.push(4);
	s2.push(5);
	s2.push(6);
	
	s1.swap(s2);
	
	while(!s1.empty()){
		cout<<s1.top()<<" ";
		s1.pop();
	}
	cout<<"\n";
	
	while(s2.size()>0){
		cout<<s2.top()<<" ";
		s2.pop();
	}


    return 0;
}


