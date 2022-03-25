#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	int arr[6] =  {1, 2, 3, 4, 5, 6};
  
    // Checking if no element is negative
    none_of(arr, arr+6, [](int x){ return x<0; })?
          cout << "No negative elements" :
          cout << "There are negative elements";


    return 0;
}

