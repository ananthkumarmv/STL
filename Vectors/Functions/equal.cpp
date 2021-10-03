#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int v1[] = { 10, 20, 30, 40, 50 };
	
	vector<int> vector_1 (v1, v1+sizeof(v1)/sizeof(int));
	
	//printing vector1
	
	cout<<"Vector contains :";
	
	for(unsigned int i=0; i<vector_1.size(); i++)
		cout<<" "<<vector_1[i];
		
	cout<<"\n";
	
	if(equal(vector_1.begin(), vector_1.end(), v1) )
		cout<<"The contents of both sequences are equal. \n";
	
	else
	 cout<<"The contents of both sequences differ.";
	

	return 0;
}

