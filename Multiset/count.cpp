#include<iostream>
#include<set>

using namespace std;

int main(){
	
	int arr[] = { 15, 10, 15, 11, 10, 18, 18, 20, 20 };
	
	// initializes the set from an array
	multiset<int> s(arr, arr + 9);
	 
	cout<<"15 occurs "<< s.count(15) <<" times in container";

    return 0;
}


