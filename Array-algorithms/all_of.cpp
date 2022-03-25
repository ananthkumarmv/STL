#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int arr[6] = {1,2,3,4,5,-6};
	
	// checking if all eles are positive
	all_of(arr, arr+6, [](int x){ return x>0;}) ? cout<<"All are positive eles" : cout<<"All are not positive eles";

    return 0;
}


