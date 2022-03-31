#include<iostream>
#include<list>
using namespace std;

int main(){
	
	list<int> list1{}, list2{};
	
	list1.push_front(3);
	list1.push_front(2);
	list1.push_front(1);
	
	while(!list1.empty()){
		list2.push_front(list1.front());
		list1.pop_front();
	}
	
	for(auto it = list2.begin(); it != list2.end(); ++it)
		cout<<*it<<" ";

    return 0;
}


