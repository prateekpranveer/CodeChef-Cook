#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t; 
    cin>>t;
    while (t--) {
        ll n; 
        cin>>n;
        ll arr[n];
        ll ansmini = 1e18;
        ll ansmaxi = -1e18;
        for (ll i = 0; i<n; i++) {
            cin>>arr[i];
        }
        sort (arr, arr+n);
        ansmaxi = max(arr[0]*arr[0], arr[n-1]*arr[n-1]);
            if (arr[0]<0 && arr[n-1]>0) {
                ansmini = arr[0]*arr[n-1];
            }
            else {
                for (int i = 0; i<n; i++) {
                    ansmini = min(ansmini, arr[i]*arr[i]);
                }
            }
            
            cout << ansmini << " " << ansmaxi << endl;
        }
        
	// your code goes here
	return 0;
}
