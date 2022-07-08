#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; 
    while (t--){
        string ans = "PASS";
        int a,b,c;
        cin>>a>>b>>c;
        if (a<10 || b<10 || c<10) ans = "FAIL";
        if (a+b+c<100) ans = "FAIL";
        cout << ans << endl;
    }
}