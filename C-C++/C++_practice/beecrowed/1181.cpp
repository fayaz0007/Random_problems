#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    char calcu;
    double average,sum=0, array[12][12];
    cin>>n>>calcu;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin>>array[i][j];
        }
    }
    if(calcu =='S'){
        for(i = 0; i < 12; i++){
            sum+=array[n][i];
        }
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(calcu =='M'){
        for(j = 0; j<12;j++){
            sum+=array[n][j];
            average=sum/12;
        } 
        printf("%.1lf",average);    
    }
    
    return 0;
}
