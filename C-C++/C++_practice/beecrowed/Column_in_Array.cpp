#include <bits/stdc++.h>
using namespace std;
int main(){
    char calculation_type;
    int horijontal_input,i,j;
    double sum=0,average=0,array[12][12];
    cin>>horijontal_input>>calculation_type;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>array[i][j];
        }
    }
    if(calculation_type=='S'){
        for ( i = 0; i < 12; i++)
        {
            sum+=array[i][horijontal_input];
        }
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(calculation_type=='M'){
        for ( i = 0; i < 12; i++)
        {
            sum+=array[i][horijontal_input];
            average=sum/12;
            
        }
        cout<<fixed<<setprecision(1)<<average<<endl;
    }
}