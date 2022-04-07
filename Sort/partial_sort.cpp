#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	partial_sort(arr, arr+5, arr+n);
	
	for(int i=0; i<n ;i++)
		cout<<arr[i]<<" ";

    return 0;
}

