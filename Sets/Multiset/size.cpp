#include<iostream>
#include <set>

using namespace std;

int main(){
	
	multiset<int> s;
	
	s.insert(10);
	s.insert(13);
	
	cout<<"The size of multiset: "<<s.size();
	s.insert(25);
	s.insert(13);
	
	cout << "\nThe size of multiset: " << s.size();
    s.insert(24);
  
    cout << "\nThe size of multiset: " << s.size();

    return 0;
}


