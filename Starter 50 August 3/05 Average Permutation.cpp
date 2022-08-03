// Solved in Time

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        deque<int>d;
        for (int i = 1; i<=n; i++){
            if (i%2==0){
                d.push_front(i);
            }
            else{
                d.push_back(i);
            }
        }
        while(!d.empty()){
            int x = d.front();
            cout << x << " ";
            d.pop_front();
        }
        cout <<endl;
    }
	// your code goes here
	return 0;
}
