#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

using namespace std;

int main(){
	
	array<int, 5> foo {1,2,3,4,5};
	
	// obtain a time-based seed:
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	
	shuffle(foo.begin(), foo.end(), default_random_engine(seed));
	
	for(int& x: foo)
		cout<<x<<" ";
	
	
    return 0;
}


