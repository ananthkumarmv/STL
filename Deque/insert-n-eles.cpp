#include<iostream>
#include <deque>

using namespace std;

int main(){
	
	deque<int> dq = { 1, 2, 3, 4, 5 };
	
	deque<int>::iterator it = dq.begin();
	
	it = dq.insert(it, 3, 10); //  10 10 10 1 2 3 4 5
	
	for (it = dq.begin(); it != dq.end(); ++it)
        cout << ' ' << *it;
	
	
    return 0;
}


