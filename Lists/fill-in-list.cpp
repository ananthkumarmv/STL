#include<bits/stdc++.h>

using namespace std;

int main(){
	list<int> m1 = {10, 20, 30};
	
	fill(m1.begin(), m1.end(), 4);
	
	for(int x: m1)
		cout<<x<<" ";

    return 0;
}


