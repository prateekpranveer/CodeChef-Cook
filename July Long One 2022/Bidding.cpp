#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x = max(a,max(b,c));
        if (x==a) cout << "Alice" << endl;
        else if (x==b) cout << "Bob" << endl;
        else cout << "Charlie" << endl;
    }
	// your code goes here
	return 0;
}
