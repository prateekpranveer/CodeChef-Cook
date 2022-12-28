#include <bits/stdc++.h>
using namespace std;

int lcs (string &s, int i, int j, vector<vector<int>>&dp) {
    if (i>=j) return 0;
    if (dp[i][j]!=-1) return dp[i][j];
    if (s[i]==s[j]) {
        return dp[i][j] = 1 + lcs(s, i+1, j-1,dp);
    }
    return dp[i][j] = max(lcs(s, i+1, j,dp), lcs(s,i,j-1,dp));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin>>t;
    while (t--) {
        int n; 
        cin>>n;
        string s;
        cin>>s;
        int size = s.size();
        int i = 0;
        int j = s.size()-1;
        vector<vector<int>>dp(5005, vector<int>(5005,-1));
        int ct = lcs(s, i, j, dp);
        cout << ct << endl;
    }
	return 0;
}
