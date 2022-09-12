#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll f(ll n) {
    return ((n*(n-1))/2);
}

int main() {
    ll t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        ll arr[n];
        unordered_map<ll,ll>m;
        for (ll i = 0; i<n; i++) {
            cin>>arr[i];
            m[arr[i]]++;
        }
        ll total = 0;
        for (auto x:m){
            total+=f(x.second);
        }
        cout << total << endl;
    }
	// your code goes here
	return 0;
}
