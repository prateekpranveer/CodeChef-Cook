#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
using namespace std;

int main() {
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

        int ele = 0;
        int size = 0;
        for (auto x:m){
            size = max(size, x.second);
        }
        for (auto x:m){
            if (x.second == size){
                ele = x.first;
            }
        }

        int sizetorem = size/2;
        m[ele] = size - sizetorem;

        int ansmax = 0;
        for (auto z:m){
            ansmax = max(ansmax, z.second);
        }

        cout << ansmax << endl;
    }
}
