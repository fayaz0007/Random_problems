#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,count=1,count1 = 11;
    double array[12][12],sum=0.0,average=0.0;
    char calculation_type;
    cin>>calculation_type;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin>>array[i][j];
            // if(j>i && (i+j)<11) sum+=array[i][j];   //optimized solution
        }
       
    }

    for(i = 0; i < 5; i++){
        for(j = count; j < count1; j++){
            sum+=array[i][j];
        }
        count1--;
        count++;
    }
    if(calculation_type=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(calculation_type=='M'){
        cout<<fixed<<setprecision(1)<<sum/30<<endl;
    }
}