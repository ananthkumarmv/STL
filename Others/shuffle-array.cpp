#include<iostream>
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
using namespace std;

void shuffle_array(int arr[], int n){
	unsigned seed = 0;
	
	shuffle(arr, arr+n, default_random_engine(seed));
	
}


int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	shuffle_array(arr, n);
	
	for(int i=0; i<n ;i++)
		cout<<arr[i]<<" ";
	
    return 0;
}


