#include<iostream>
#include <deque>

using namespace std;

int main(){
	
	deque<int> mydeque{ 1, 2, 3, 4, 5 };
    deque<int>::iterator it1, it2;
 
    it1 = mydeque.begin();
    it2 = mydeque.end();
    it2--;
    it2--;
 
    mydeque.erase(it1, it2);
 
    for (auto it = mydeque.begin(); it != mydeque.end(); ++it)
        cout << ' ' << *it;


    return 0;
}


