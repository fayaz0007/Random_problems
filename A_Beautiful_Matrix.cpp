#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5],result;
    for(int r = 0; r < 5;r++){
        for(int c = 0;c<5;c++){
            cin>>arr[r][c];
        }
    }
    for(int r = 0; r < 5;r++){
        for(int c = 0;c<5;c++){
            if(arr[r][c]==1){
                result = abs(2-r)+abs(2-c);
                break;
            }
        }
    }
    cout<<result<<endl;
}