#include <bits/stdc++.h>
using namespace std;
int main(){
      int mat[2][3] = {{5,6},{7}};
      int mft[4][3] = {{1,2},{4,5,8},{10}};
      for (int i = 0; i<4;i++){
        for (int j = 0; j<3;j++){
            cout<<i+1<<":"<<j+1<<'='<<fixed<<setprecision(2)<<mft[i][j]<<" ";
        }
      
        cout<<endl;
    }
      
}