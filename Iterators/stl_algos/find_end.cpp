#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
	
	vector<int>v = {1, 3, 10, 3, 10, 1, 3, 3, 10, 7, 8, 
                    1, 3, 10};
                    
    vector<int>v1 = {1, 3, 10};
    
    vector<int>::iterator ip;
    
    ip = find_end(v.begin(), v.end(), v1.begin(), v1.end());
    
    cout<<(ip - v.begin())<<"\n";

	return 0;
}

