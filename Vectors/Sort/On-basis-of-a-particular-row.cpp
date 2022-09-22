#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
	
	vector<vector<int> > vect{ {3, 5, 1}, 
							 {4, 8, 6}, 
							 {7, 2, 9}};
                               
    
    
    sort(vect[0].begin(), vect[0].end());
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }
	return 0;
}
