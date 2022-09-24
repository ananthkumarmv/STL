#include<iostream>
#include<tuple>
#include<vector>

using namespace std;

int main(){
	
	vector<tuple<int, int, int>> v;
	
	v.push_back(make_tuple(10, 20, 30));
	v.push_back(make_tuple(15, 5, 25));
	v.push_back(make_tuple(3, 2, 1));
	
	for(int i=0; i<v.size(); i++){
		cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<" "<<get<2>(v[i]);
		cout<<endl;
	}

	return 0;
}
