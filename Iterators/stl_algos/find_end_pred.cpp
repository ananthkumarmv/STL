#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool pred(int a, int b){
	return (a==b);
}


int main(){
	
	vector<int>v = {1, 5, 7, 11, 10, 13, 15, 30, 30, 7};
	
	vector<int>v1 = {13, 15};
	
	vector<int>::iterator ip;
	
	ip = find_end(v.begin(), v.end(), v1.begin(), v1.end(), pred);
	
	cout<<(ip-v.begin())<<"\n";

	return 0;
}

