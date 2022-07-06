// Giving TLE with DP approach

#include <bits/stdc++.h>
using namespace std;

bool canMarry(string a, string b, int i, int j, vector<vector<int>>&dp){
    if (i<0 && j>=0) return 0;
    if (i>=0 && j<0) return 0;
    if (i==0 && j==0) return a[i]==b[j];
    if (dp[i][j]!=-1) return dp[i][j];
    if (a[i]==a[j]) return dp[i][j] = canMarry(a,b,i-1,j-1,dp);
    return dp[i][j] = canMarry(a,b,i-1,j,dp) || canMarry(a,b,i,j-1,dp);
}

int main() {
    int t; cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a>>b;
        int i  = a.size();
        int j = b.size();
        vector<vector<int>>dp(i+1,vector<int>(j+1,-1));
        bool x = canMarry(a,b,i-1,j-1,dp);
        if (x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}
