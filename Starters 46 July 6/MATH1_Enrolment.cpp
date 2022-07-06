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
        int ans = 0;
        int start;
        int end = n;
        if (s[n-1]==0) ans+=1;
        for (int i = 0; i<n; i++){
            if (s[i]==1) start = i;
            break;
        }
        s.push_back(1);
        
        while(start<end){
            if (s[start]-1 == s[start+1]){
                ans++;
                start+=2;
            }
            else{
                start+=1;
            }
        }
        cout <<ans<<endl;
    }
}