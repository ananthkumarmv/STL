#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


bool pred(int a, int b){
	return (a%b!=0) ? 1 : 0;
}


bool pred1( int a, int b)
{
    return (a%b==0) ? 1 : 0;
}



int main(){
	
	vector<int>v1 = {1, 3, 4, 5, 6, 7, 8, 10};
	
	vector<int>v2 = {2};
	
	// Using std::find_end to find the last occurrence of an
    // odd number
    vector<int>::iterator ip;
    
    ip = std::find_end(v1.begin(), v1.end(), v2.begin(),
                       v2.end(), pred);
                       
    
    cout << "Last odd no. occurs at " <<  (ip - v1.begin());
    
    
    // Using std::find_end to find the last occurrence of an 
    // even number
    ip = std::find_end(v1.begin(), v1.end(), v2.begin(),
                       v2.end(), pred1);
                       
                       
    // Displaying the index where the last even number occurred
    cout << "\nLast even no. occurs at " <<  (ip - v1.begin());
    
    
	return 0;
}

