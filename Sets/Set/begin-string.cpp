#include<iostream>
#include <set>
#include <string>

using namespace std;

int main(){
	set<string, greater<string> > myset{"Name", "is", "Amith"};
	
	for(auto it = myset.begin(); it!=myset.end(); it++)
		cout<<*it<<" ";
		
    return 0;
}


