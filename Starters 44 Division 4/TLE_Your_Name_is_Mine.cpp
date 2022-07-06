#include <bits/stdc++.h>
using namespace std;

bool canMarry(string a, string b, int x, int y){
    int i = 0;
    int flag = 1;
    int j = 0;
    int ct = 0;
    while(i<=x){
        if (j==y){
            break;
        }
        if (a[i]==b[j]){
            i++;
            j++;
            ct++;
        }
        else{
            j++;
        }
    }

    if (ct==x) return true;
    else return false;
}

int main() {
    int t; cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a>>b;
        int i  = a.size();
        int j = b.size();
        bool x = canMarry(a,b,i,j);
        if (x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	// your code goes here
	return 0;
}