#include<iostream>
#include<numeric>  // for iota()

using namespace std;

int main(){
	// Initializing array with 0 values
	int arr[6] = {0};
	
	// using iota() to assign values
	iota(arr, arr+6, 20);
	
	//Displaying the new array
	cout<<"The new array after assigning values is: ";
	for(int i=0; i<6; i++)
		cout<<arr[i]<<" ";

    return 0;
}


