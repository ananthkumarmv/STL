#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

bool myComparator(vector<pair<int, int> >& vector1, vector<pair<int, int> >& vector2){
	return vector1[0].first < vector2[0].first;
}


void print(vector<vector<pair<int, int>>> &myContainer){
	
	for(auto currentVector: myContainer){
		vector<pair<int, int>> myVector = currentVector;
		
		cout<<"[ ";
		for(auto pr: myVector){
			cout<<"{";
			cout<<pr.first<<", "<<pr.second;
			cout<<"}  ";
		}
		cout<<"]\n";
	}
		
}

int main(){
	
	vector<vector<pair<int, int>>> myContainer;
	
	vector<pair<int, int>> vect1 = {{2, 1}, {1, 9}, {4, 3}, {8, 1}};
	
	vector<pair<int, int> > vect2 = {{19, 10}, {11, 2}, {12, 14}, {14, 6}};
	
	vector<pair<int, int> > vect3 = {{17, 18}, {19, 20}, {21, 22}, {23, 24}};
	
	vector<pair<int, int> > vect4 = {{25, 26}, {27, 28}, {29, 30}, {31, 32}};

	// Inserting vectors in the 2D vector
    myContainer.push_back(vect1);
    myContainer.push_back(vect2);
    myContainer.push_back(vect3);
    myContainer.push_back(vect4);
 
    print(myContainer);
    
    sort(myContainer.begin(), myContainer.end(), myComparator);
    
    cout << "\n\n After sorting the first row " <<
            "on the basis of first element of pairs, \n";
    print(myContainer);
 
	return 0;
}
