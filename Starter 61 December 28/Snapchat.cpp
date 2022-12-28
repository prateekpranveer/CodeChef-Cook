#include <iostream>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--) {
        int day;
        cin>>day;
        int chef[day];
        int chefina[day];
        for (int i = 0; i<day; i++) {
            cin>>chef[i];
        }
        for (int i = 0; i<day; i++) {
            cin>>chefina[i];
        }
        int ct = 0;
        int maxs = 0;
        for (int i = 0; i<day; i++) {
            if (chef[i] !=0 && chefina[i]!=0) {
                ct++;
                maxs = max(ct,maxs);
            }
            else {
                ct = 0;
            }
        }
        cout << maxs << endl;
    }
	return 0;
}
