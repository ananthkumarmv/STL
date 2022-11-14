#include<iostream>
#include<set>

using namespace std;

int main(){
	int arr[] = { 15, 10, 15, 11, 10, 18, 18, 20, 20 };
	
	multiset<int> s(arr, arr + 9);
	
	if(!s.empty())
		cout<<"The multiset is not empty";
	else 
		cout<<"The multiset is empty";


    return 0;
}


