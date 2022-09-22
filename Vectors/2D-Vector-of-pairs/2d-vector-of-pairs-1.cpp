#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

// Function to print 2D vector elements
void print(vector<vector<pair<int,string>>> &myContainer){
	
	// Iterating over 2D vector elements
	for(auto currentVector: myContainer){
		// Each element of the 2D vector
        // is a vector itself
        vector<pair<int, string>> myVector = currentVector;
        
        // Iterating over the vector
        // elements
        cout << "[  ";
        for(auto pr:myVector){
        	// print the element
        	cout<<"{";
        	cout<<pr.first<<" , "<<pr.second;
        	cout<<"}  ";
		}
		cout<<"]\n";
    
	}
}


int main(){
	vector<vector<pair<int, string>>> myContainer;
	
	// initializing vector of pairs
	// pairs are of type {int, string}
	
	vector<pair<int, string>> vect1 = {{0, "CS"}, {1, "EEE"},
									   {2, "MECH"}};
									   
	vector<pair<int, string>> vect2 = {{0, "CPP"}, {1, "C"},
									   {2, "PY"}};
	
	myContainer.push_back(vect1);
    myContainer.push_back(vect2);
    
    // Calling print function
    print(myContainer);
  
  
	return 0;
}
