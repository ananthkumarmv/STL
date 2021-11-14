#include<iostream>
#include<set>
using namespace std;

int main(){
	set<char> set1, set2;
	for(int i=0; i<4; i++){
		set1.insert('a'+i);
	}
	
	cout << "set1 size: " << set1.size();
    cout << endl;
    cout << "set2 size: " << set2.size();

    return 0;
}


