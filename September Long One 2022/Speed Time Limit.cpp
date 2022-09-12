#include <iostream>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--) {
        double a,x,b,y;
        cin>>a>>x>>b>>y;
        if (a/x==b/y){
           cout << "Equal"<<endl;
           continue;
        }
        else if (a/x>b/y){
            cout << "Alice" << endl;
            continue;
        }
        else {
            cout << "Bob" << endl;
        }
    }
	// your code goes here
	return 0;
}
