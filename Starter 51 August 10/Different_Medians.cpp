// Solved in Time

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[1002];
        arr[1] = 0;
        int left = 0;
        int right = 0;
        for (int i = 2; i<=n; i++){
            if (i%2==0){
                left-=1;
                arr[i] = left;
            }
            else {
                right+=1;
                arr[i] = right;
            }
        }
        for (int i = 1; i<=n; i++){
            cout << arr[i] - left +1 << " ";
        }
        cout << endl;
        
    }
	// your code goes here
	return 0;
}