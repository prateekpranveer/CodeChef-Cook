// Solved under Time

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string x;
        string y;
        cin >> x;
        cin >> y;
        int x1 = 0;
        int y1 = 0;
        for (int i = 0; i<x.size(); i++){
            if (x[i]=='1') x1+=1;
        }
        for (int j = 0; j<y.size(); j++){
            if (y[j]=='1') y1+=1;
        }
        int total = (abs(y1-x1));
        if (total%2==0) cout << 1 << endl;
        else cout << 0 << endl;
        
    }
	// your code goes here
	return 0;
}
