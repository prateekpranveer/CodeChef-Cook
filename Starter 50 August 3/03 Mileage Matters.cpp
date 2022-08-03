// Solved in Time

#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        double n,x,y,a,b;
        cin>>n>>x>>y>>a>>b;
        double wp = (n/a)*x;
        double wd = (n/b)*y;
        if (wp>wd) cout << "DIESEL" << endl;
        else if (wp==wd) cout << "ANY" << endl;
        else cout << "PETROL" << endl;
        
    }
	// your code goes here
	return 0;
}
