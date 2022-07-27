// Solved under Time
#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
         int a,b,c,d;
         cin>>a>>b>>c>>d;
         cout << max(a,b) + max(c,d) << endl;
    }
	// your code goes here
	return 0;
}
