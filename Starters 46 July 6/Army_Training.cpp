#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int attack = 0;
        int defense = 0;
        
        map<int,int>m;
        for (int i = 0; i<n; i++){
            m[v[i]]++;
        }
        for (auto x:m){
            if (x.second==1){
                if (x.first<500) defense+=(1000-x.first);
                if (x.first>=500) attack+=x.first;
            }
            else{
                if (x.second%2==0){
                    if (x.first<500) defense+=(x.second*(1000-x.first));
                    if (x.first>500) attack+=(x.second*(x.first));
                    if (x.first==500){
                        int half = x.second/2;
                        defense+=(x.first*half);
                        attack+=(x.first*half);
                    }
                }
                else{
                    if (x.first<500) defense+=(x.second*(1000-x.first));
                    if (x.first>500) attack+=(x.second*(x.first));
                    if (x.first==500){
                        int half = x.second/2;
                        defense+=((half+1)*(500));
                        attack+=((half)*(500));
                    }
                }
            }
        }
        cout << attack*defense <<endl;
    }

}
