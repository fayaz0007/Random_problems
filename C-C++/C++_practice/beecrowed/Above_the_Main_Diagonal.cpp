#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,count_1=1,count_2=0,j;
    char calculation_type;
    double sum,average,array[12][12];
    cin>>calculation_type;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin>>array[i][j];
        }
    }
    if(calculation_type=='S'){
        for(i = 0;i < 12;i++){
            for ( j = count_1; j < 12; j++)
            {
                sum+=array[i][j];
                count_2++;

            }
            count_1++;
        }
        cout<<fixed<<setprecision(1)<<sum<<endl<<count_2<<endl;
    }
    else if(calculation_type=='M'){
        for(i = 0;i < 12;i++){
            for ( j = count_1; j < 12; j++)
            {
                sum+=array[i][j];
                count_2++;
            }
            
            count_1++;
        }
        average=sum/count_2;
        cout<<fixed<<setprecision(1)<<average<<endl;
    }
    
    return 0;
}