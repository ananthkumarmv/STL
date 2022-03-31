#include<iostream>
#include<list>
using namespace std;

int main(){
	
	list<int> mylist{5,6,3,7,8,9,1,2};
	
	mylist.sort();
	
	for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;
    

    return 0;
}


