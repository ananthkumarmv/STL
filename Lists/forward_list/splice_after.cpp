#include<iostream>
#include <forward_list>

using namespace std;

int main(){
	
	forward_list<int> flist1 = { 10, 20, 30 };
	
	forward_list<int> flist2 = { 40, 50, 60 };
	
	flist2.splice_after(flist2.begin(), flist1);
	
	cout << "The forward list after splice_after operation "
            ": ";
    for (int& c : flist2)
        cout << c << " ";    // 40 10 20 30 50 60
    cout << endl;


    return 0;
}


