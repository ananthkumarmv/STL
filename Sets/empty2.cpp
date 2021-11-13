#include<iostream>
#include<set>

using namespace std;

int main(){
	
	int sum =0;
	
	set<int> myset{ 1, 5, 6, 3, 9, 2 };
	
	// finding sum of elements
	while(!myset.empty()){
		sum+=*myset.begin();
		myset.erase(myset.begin());
	}
	
	cout<<sum;

    return 0;
}


