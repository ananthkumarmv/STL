#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main(){
	
	deque<int> dq = { 1, 2, 3, 4, 5 };
  
    deque<int>::iterator it = dq.begin();
    ++it;
  
    vector<int> v(2, 10);
    
    dq.insert(it, v.begin(), v.end());
  
    for (it = dq.begin(); it != dq.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
    

    return 0;
}


