#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> vec{10, 20, 30, 40};
	
	// iterator used to store the position
	// of the searched element
	vector<int>::iterator it;
	
	// print the origonal vector
	cout<<"Original vector: ";
	for(int i=0; i<vec.size(); i++) cout<<" "<<vec[i];
	
	cout<<"\n";
	
	//element to be searched
	int ser=30;
	
	//std::find function call
	it = find(vec.begin(), vec.end(), ser);
	if(it != vec.end()){
		cout<<"Element "<<ser << " found at pos: ";
		cout<<it-vec.begin()<<" (counting from zero) \n";
	}
	
	else cout<<"Element not found.";

	return 0;
}

