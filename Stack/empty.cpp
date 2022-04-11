#include<iostream>
#include<stack>

using namespace std;

int main(){
	
	stack<int> s;
	
	s.push(1);
	
	if(s.empty())
		cout<<"True";
	else
		cout<<"False";


    return 0;
}


