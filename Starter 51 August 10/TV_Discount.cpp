// Solved in Time

#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if (a-c>b-d){
            cout << "Second" << endl;
        }
        else if (b-d>a-c) cout << "First" << endl;
        else cout << "Any" << endl;
    }
	// your code goes here
	return 0;
}
