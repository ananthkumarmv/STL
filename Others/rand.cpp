#include<iostream>
#include <cstdlib>      // std::rand

using namespace std;

// This program will create same sequence of
// random numbers on every program run
int main(){
	for(int i=0; i<5; i++)
	cout<<rand()<<" ";

    return 0;
}


