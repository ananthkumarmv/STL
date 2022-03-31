#include<iostream>
#include <forward_list>

using namespace std;

int main(){
	
	forward_list<int> flist1 = { 10, 20, 30 };
	
	forward_list<int> flist2 = { 40, 50, 60 };
	
	flist2.splice_after(flist2.begin(), flist1, flist1.before_begin(), flist1.end());
	
	cout<<"Elements are: "<<endl;
    
    for(auto it = flist2.begin(); it != flist2.end(); it++)
    	cout<<*it<<" ";

    return 0;
}


