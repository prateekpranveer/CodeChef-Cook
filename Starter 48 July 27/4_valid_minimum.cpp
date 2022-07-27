// Solved under Time

#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string ans;
        int a,b,c;
        cin>>a>>b>>c;
        int x = min(a,b);
        int y = min(b,c);
        int z = min(c,a);
        if (x==y) {
            if (y==z) {
                if (z==x){
                    ans = "YES";
                }
                else ans = "NO";
            }
            else ans = "NO";
        }
        else ans = "NO";
        cout << ans << endl;
    }
	// your code goes here
	return 0;
}
