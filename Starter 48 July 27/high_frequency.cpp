#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
using namespace std;

int main(){
    int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int>v(n);
	    for (int i = 0; i<n; i++){
	        cin>>v[i];
	    }
        map <int,int>m;
        for (auto x:v){
            if (m.find(x)==m.end()){
                m[x] = 1;
            }
            else {
                m[x]++;
            }
        }
    }
}