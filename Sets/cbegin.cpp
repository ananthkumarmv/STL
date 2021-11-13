#include<iostream>
#include<set>
using namespace std;

int main(){
	
	int arr[] = { 14, 12, 15, 11, 10 };
	
	set<int> s(arr, arr+5);
	
	for(auto it = s.cbegin(); it != s.cend(); it++)
		cout<<*it<<" ";
    return 0;
}


