#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
	int i, j;
	
	vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 3, 4, 5 };
	
	vector<int> v2 = {3, 4};
	
	vector<int>::iterator i1;
	
	i1 = search(v1.begin(), v1.end(), v2.begin(), 
                     v2.end());
    
    
    if (i1 != v1.end()) {
        cout << "vector2 is present firstly at index " 
             << (i1 - v1.begin());
    } else {
        cout << "vector2 is not present in vector1";
    }
    
    
    // Using std::find_end to find the last occurrence of v2
    
    i1 = find_end(v1.begin(), v1.end(), v2.begin(), v2.end());
    
    if (i1 != v1.end()) {
        cout << "\nvector2 is present lastly at index " 
             << (i1 - v1.begin());
    } else {
        cout << "vector2 is not present in vector1";
    }
    
	return 0;
}

