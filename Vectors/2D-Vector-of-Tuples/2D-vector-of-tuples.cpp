#include<iostream>
#include<tuple>
#include<vector>

using namespace std;

void print(vector<vector<tuple<int, int, int>>> &myContainer){
	
	for(auto currentVector : myContainer){
		vector<tuple<int, int, int>> myVector = currentVector;
		
		cout<<"[ ";
		for(auto currentTuple : myVector){
			cout<<"{";
			cout<<get<0>(currentTuple)<<", "<<get<1>(currentTuple)<<", "<<get<2>(currentTuple);
			cout<<"} ";
		}
		cout<<"]\n";
	}
}

int main(){
	
	vector<vector<tuple<int, int, int>>> myContainer;
	
	// Initializing vectors of tuples
    // tuples are of type {int, int, int}
    vector<tuple<int, int, int> > vect1
        = { { 1, 1, 2 }, { 2, 2, 4 }, { 3, 3, 6 }, { 4, 4, 8 } };
 
    vector<tuple<int, int, int> > vect2
        = { { 1, 2, 3 }, { 1, 3, 4 }, { 1, 4, 5 }, { 1, 5, 6 } };
 
    vector<tuple<int, int, int> > vect3
        = { { 4, 5, 2 }, { 8, 1, 9 }, { 9, 3, 1 }, { 2, 4, 8 } };
 
    vector<tuple<int, int, int> > vect4
        = { { 7, 2, 1 }, { 6, 5, 1 }, { 1, 2, 9 }, { 10, 4, 8 } };
        
        
    myContainer.push_back(vect1);
    myContainer.push_back(vect2);
    myContainer.push_back(vect3);
    myContainer.push_back(vect4);
    
    print(myContainer);

	return 0;
}
