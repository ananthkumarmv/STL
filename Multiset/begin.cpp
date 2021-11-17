#include<iostream>
#include <set>
#include <iterator>
using namespace std;

int main(){
	int arr[] = { 14, 10, 15, 11, 10 };
  
    // initializes the set from an array
    multiset<int> s(arr, arr + 5);
  
    // Print the first element
    cout << "The first element is: " << *(s.begin()) << endl;
  
    // prints all elements in set
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";


    return 0;
}


