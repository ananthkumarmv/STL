#include<bits/stdc++.h>

using namespace std;

bool pred(int i, int j){
	return (i!=j);
}

int main(){
	
	int v1[] = { 10, 20, 30, 40, 50 };
	
	vector<int> vec (v1, v1+sizeof(v1)/sizeof(int));
	
	cout<<"vector contains: ";
	
	for(unsigned int i=0; i<vec.size(); i++)
		cout<<" "<<vec[i];
		
	cout<<"\n";
	
	// using std::equal()
    // Comparison based on pred
    
    if( equal(vec.begin(), vec.end(), v1, pred))
    	cout<<"The contents of both sequences are equal.\n";
    else
        printf("The contents of both sequences differ.");
    
	return 0;
}

