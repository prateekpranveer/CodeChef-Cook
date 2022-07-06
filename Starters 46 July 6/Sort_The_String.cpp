#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i = 1;
        int ct = 0;
        while(i<n){
            if (s[i] == s[i-1]-1){
                ct++;
                i+=2;
            }
            else{
                i++;
            }
        }
        cout << ct << endl;
    }
}