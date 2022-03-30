#include<iostream>
#include <forward_list>

using namespace std;

int main(){
	
	forward_list<int> myforwardlist{};
    if (myforwardlist.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}


