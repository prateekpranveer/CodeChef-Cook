// Solved in Time

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        string ans = "YES";
        unordered_map<int,int>um;
        for (int i = 0; i<n; i++){
            cin>>arr[i];
            um[arr[i]]++;
        }
        
        int maxcount = INT_MIN;
        for (auto x :um) {
            maxcount = max(maxcount , x.second);
        }
        
        for (auto y:um){
            for (auto z:um){
                if (y.second==maxcount && z.second==maxcount &&y.first!=z.first) ans = "NO";
            }
        }
    
        cout << ans << endl;
    }
	// your code goes here
	return 0;
}