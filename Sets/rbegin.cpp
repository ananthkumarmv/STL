#include<iostream>
#include<set>
using namespace std;

int main(){
	
	int arr[] = { 14, 12, 15, 11, 10 };
	
	set<int> s(arr, arr+5);
	
	set<int>::reverse_iterator rit;
	
	for(rit = s.rbegin(); rit != s.rend(); rit++){
		cout<<*rit<<" ";
	}
	
	cout<<"\n The last element in set is "<<*(s.rbegin());


    return 0;
}


