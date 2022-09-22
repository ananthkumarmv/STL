#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    v.assign(7, 100);
 
    cout << "Size of first: "
      << int(v.size()) << '\n';
 
    cout << "Elements are\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}
