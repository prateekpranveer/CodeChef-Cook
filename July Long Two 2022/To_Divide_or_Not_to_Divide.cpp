#include <iostream>
using namespace std;

int magicNumber(int a, int b, int c){
    if (a%b==0) return -1;
    int x = c;
    if (c%a!=0){
        x = ((c/a)+1)*a;
    }
    while(x%b==0){
        x+=a;
    }
    return x;
}

int main() {
	int t; cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    cout << magicNumber(a,b,c)<<endl;
	}
	return 0;
}