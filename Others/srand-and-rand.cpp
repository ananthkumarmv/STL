#include<iostream>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

using namespace std;

// This program will create different sequence of
// random numbers on every program run
int main(){
	
	srand(time(0));
	
	for(int i=0; i<4; i++)
		cout<<rand()<<" ";
	

    return 0;
}


