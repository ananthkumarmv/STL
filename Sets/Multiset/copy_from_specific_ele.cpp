#include<iostream>
#include<set>

using namespace std;

int main(){
	
	multiset<int> s1;
	
	s1.insert(1);
    s1.insert(4);
    s1.insert(1);
    s1.insert(5);
    s1.insert(1);
    s1.insert(3);
    
    cout << "The elements in multiset1 are: ";
    for (auto it = s1.begin(); it != s1.end(); it++)
        cout << *it << " ";
 
    multiset<int> s2;
    
    // Function to insert one multiset to another
    // all elements from where 3 is to end is
    // inserted to multiset2
    
    s2.insert(s1.find(3), s1.end());
    
    cout<<"\nThe elements in multiset2 are: ";
    for(auto it = s2.begin(); it != s2.end(); it++)
    	cout<<*it<<" ";
	

    return 0;
}


