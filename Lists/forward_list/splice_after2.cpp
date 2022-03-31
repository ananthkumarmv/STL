#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	
	forward_list<int> list1 = { 10, 20, 30, 40 };
    forward_list<int> list2 = { 4, 9 };
    
    list2.splice_after(list2.begin(), list1, list1.begin(), list1.end());
    
    cout<<"Elements are: "<<endl;
    
    for(auto it = list2.begin(); it != list2.end(); it++)
    	cout<<*it<<" ";

    return 0;
}


