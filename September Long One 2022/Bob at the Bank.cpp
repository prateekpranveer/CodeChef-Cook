#include <iostream>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while (t--) {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        cout << w+(x*z)-(y*z) << endl;
    }
	// your code goes here
	return 0;
}
