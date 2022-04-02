#include<iostream>
#include<utility>
#include <tuple>

using namespace std;

int main(){
	
	pair<int, pair<int, char> > pair3 = {3, {4, 'a'} };
	int x, y;
	char z;
	
	x = pair3.first;
	tie(y, z) = pair3.second;
	
	cout<<x<<" "<<y<<" "<<z;

    return 0;
}


