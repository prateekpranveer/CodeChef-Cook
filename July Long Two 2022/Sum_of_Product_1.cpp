#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>v;
        for (ll i = 0; i<n; i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }
        v.push_back(0);
        vector<ll>l;
        ll ct = 0;
        for (ll i = 0; i<v.size(); i++){
            if (v[i]==1){
                ct++;
            }
            else {
                l.push_back(ct);
                ct = 0;
                continue;
            }
        }
        ll sum = 0;
        for (auto x:l){
            sum = sum + ((x*(x+1))/2);
        }

        cout << sum << endl;
    }
}