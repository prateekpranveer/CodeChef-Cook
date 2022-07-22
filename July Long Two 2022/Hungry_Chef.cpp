#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int nb,pb,count,price;
        cin>>nb>>pb>>count>>price;
        if (nb*count>price) cout << -1 << endl;
        else if (pb*count<=price) cout << 0 << " " << count << endl;
        else {
            int x = (price - (pb*count));
            int y = (nb-pb);
            int z = 0;
            if (x%y!=0){
                z = (x/y)+1;
            }
            else{
                z = x/y;
            }
            
            cout << z << " " << count -z << endl;
        }
        
    }
}