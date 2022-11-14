#include<iostream>
#include<set>

using namespace std;

int main(){
	multiset<int> s;
	
	s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(4);
    
    cout << "The multiset elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
        
    // when 2 is present
    auto it = s.lower_bound(2);
    cout<<"\nThe lower bound of key 2 is ";
    cout<<(*it)<<endl;
    
    // when 3 is not present
    // points to next greater after 3
    it = s.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*it) << endl;
    
    // when 5 exceeds the max element in multiset
    it = s.lower_bound(7);
    cout << "The lower bound of key 7 is ";
    cout << (*it) << endl;
  

    return 0;
}


