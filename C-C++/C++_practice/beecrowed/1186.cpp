#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,count=1;
    double sum=0.0,average=0.0,array[12][12];
    char calculation_type;
    cin>>calculation_type;
    for(i = 0; i < 12; i ++){
        for(j = 0; j < 12; j ++){
            cin>>array[i][j];
        }
    }
    for(i = 11; i > 0; i--){
        for(j = count; j <= 11;j++){
            sum+=array[i][j];

        }
        count++;
    }
    if(calculation_type=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(calculation_type=='M'){
        average=sum/66.0;
        cout<<fixed<<setprecision(1)<<average<<endl;
    }
    return 0;
}