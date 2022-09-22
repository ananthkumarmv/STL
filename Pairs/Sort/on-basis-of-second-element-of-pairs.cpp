#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int, int> &b){
	return (a.second < b.second);
}

int main(){
	
	vector<pair<int,int>> vect;
	
	int arr[] = {10,20,5,40};
	int arr1[] = {30, 60, 20, 50};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<n; i++)
		vect.push_back(make_pair(arr[i], arr1[i]));
		
	cout << "The vector before sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
             << vect[i].second << endl;
  
    }
    
    sort(vect.begin(), vect.end(), sortbysec);
	
	// Printing the sorted vector(after using sort())
    cout << "The vector after sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }

	return 0;
}
