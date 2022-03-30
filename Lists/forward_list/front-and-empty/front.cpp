#include<iostream>
#include <forward_list>

using namespace std;

int main(){
	
	forward_list<int> myforwardlist{ 1, 2, 3, 4, 5 };
    cout << myforwardlist.front();

    return 0;
}


