#include <bits/stdc++.h>
using namespace std;


void matrixtrue(int x1, int y1, vector<vector<int>> &matrix){
    matrix[x1+1][y1+2]++;
    matrix[x1+1][y1+2]++;
    matrix[x1-1][y1+2]++;
    matrix[x1-1][y1-2]++;
    matrix[x1+2][y1+1]++;
    matrix[x1+2][y1+1]++;
    matrix[x1-2][y1+1]++;
    matrix[x1-2][y1-1]++;
}

int main(){
    int t; cin>>t;
    while(t--){
        vector<vector<int>> chess(8, vector<int>(8,0));
        int x1,y1;
        int x2,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        matrixtrue(x1,y1,chess);
        matrixtrue(x2,y2,chess);
        int flag = 0;
        for (int i = 0; i<8; i++){
            for (int j = 0; j<8; j++){
                if (chess[i][j]>1){
                    flag = 1;
                }
            }
        }
        if (flag == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "N0" << endl;
        }
    }
    

}