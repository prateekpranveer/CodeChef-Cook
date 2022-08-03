// Solved in Time

#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--){
        int ans = 0;
        int a,b;
        cin>>a>>b;
        int c = max(a,b)-min(a,b);
        if (c%2==0) ans = c/2;
        else if (c==1) ans = 1;
        else if (c%2!=0){
            ans = (c/2)+1;
        }
        cout << ans << endl;
    }
	// your code goes here
	return 0;
}
