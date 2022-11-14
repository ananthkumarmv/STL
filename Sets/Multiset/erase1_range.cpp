#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main(){
	
	// Initialise the multiset
    multiset<int> multi_set;
    multiset<int>::iterator ms_iterator;
    
    // Add values to the multiset
    for (int i = 1; i < 10; i++) {
        multi_set.insert(i);
    }
    
    cout << "Original multiset: ";
  
    for (ms_iterator = multi_set.begin();
         ms_iterator != multi_set.end();
         ++ms_iterator)
  
        cout << ' ' << *ms_iterator;
    cout << '\n';
    
    ms_iterator = multi_set.begin();
    ms_iterator++;
    ms_iterator++;
    
    // passing the iterator range for the positions
    // at which the values are to be erased
    
    auto ir = multi_set.erase(ms_iterator, multi_set.end());
    
    cout<<"Modified multiset: ";
    
    for(ms_iterator = multi_set.begin(); ms_iterator != multi_set.end(); ++ms_iterator)
        
        cout<<" "<<*ms_iterator;
        
    cout<<"\n";
    (ir == multi_set.end()) ? cout<<"Return value is: multi_set.end()\n" : cout<<"Return value is: multi_set.end()\n";
    
    return 0;
}


