#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    while(n--){
        int t,n,s;
        cin>>t>>n>>s;
        int totaltest;
        if (s%n==0) totaltest = s/n;
        if (s%n!=0) totaltest = (s/n)+1;
        int ans;
        if (totaltest<=t){
            if (s%n==0){
                cout << (s/n)*(n*n) <<endl;
            }
            else{
                cout << ((s/n)*(n*n)) + ((s%n)*(s%n)) << endl;
            }
        }
        
        else{
            cout << t*n*n << endl;
        }
    }
	return 0;
}
