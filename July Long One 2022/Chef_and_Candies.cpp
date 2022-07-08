#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if (a<b) {
            cout << 0 << endl;
            continue;
        }
        int toBuy = a-b;
        if (toBuy%4==0) cout << toBuy/4 << endl;
        else cout << (toBuy/4)+1 << endl;
    }
}