// Solved in Time

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int remain;
        cin>>remain;
        int ct = 0;
        while(remain>0){
            int last = 0;
            for (int i = 0; pow(2,i)<=remain; i++){
                last = pow(2,i);
            }
            remain = remain-(last);
            ct++;
        }
        cout << ct-1 << endl;
    }
	// your code goes here
	return 0;
}