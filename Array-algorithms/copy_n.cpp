#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	int arr1[6] {1,2,3,4,5,6};
	
	int arr2[6];
	
	// using copy_n() to copy contents
	copy_n(arr1, 6, arr2);
	
	cout<<"After copying is: ";
	for(int i=0; i<6; i++)
		cout<<arr2[i]<<" ";

    return 0;
}


