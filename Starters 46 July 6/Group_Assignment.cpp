#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>um;
        for (int i = 0; i<n; i++){
            int x;
            cin>>x;
            um[x]++;
        }
        int flag = 1;
        for (auto x:um){
            if (x.second%x.first!=0) flag=0;
        }
        
        if (flag == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}