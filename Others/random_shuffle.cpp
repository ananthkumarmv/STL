#include<iostream>
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand


int myrandom(int i){
	return std::rand()%i;
}


int main(){
	
	std::srand(unsigned (std::time(0)));
	std::vector<int> myvector;
	
	for (int i=1; i<10; ++i) myvector.push_back(i);
	
	// using built-in random generator
	std::random_shuffle(myvector.begin(), myvector.end());
	
	// using myrandom:
	std::random_shuffle(myvector.begin(), myvector.end(), myrandom);
	
	for(std::vector<int>::iterator it = myvector.begin(); it!=myvector.end(); ++it)
		std::cout<<*it<<" ";
	
    return 0;
}


