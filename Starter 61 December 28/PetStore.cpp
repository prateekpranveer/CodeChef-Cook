#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int a;
         cin>>a;
          int arr[a];
          bool flag = true;
          unordered_map<int,int>um;
          for (int i = 0; i<a; i++) {
              cin>>arr[i];
              um[arr[i]]++;
          }
          for (auto x:um) {
              if (x.second%2!=0) flag = false;
          }
          if (flag) cout << "YES" << endl;
          else cout << "NO" << endl;
    }
	return 0;
}
