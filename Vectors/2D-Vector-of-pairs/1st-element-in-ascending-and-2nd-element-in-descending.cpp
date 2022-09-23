#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

bool sortByCond(pair<int, int>& a, pair<int, int>& b){
	if(a.first != b.first)
		return a.first < b.first;
	else 
		return a.second > b.second;
}

int main(){
	
	vector<pair<int, int>> vect;
	
	int arr[] = { 10, 10, 5, 5, 15, 15 };
    int arr1[] = { 40, 60, 20, 50, 12, 24 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i=0; i<n; i++){
    	vect.push_back(make_pair(arr[i], arr1[i]));
	}
	
	sort(vect.begin(), vect.end(), sortByCond);
	
	cout << "The vector after sort operation is:\n";
    for (int i = 0; i < n; i++) {
        // "first" and "second" are used to
        // access 1st and 2nd element of pair
        // respectively
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }

	return 0;
}
