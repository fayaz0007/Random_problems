#include <bits/stdc++.h>
using namespace std;
int main(){
    char calculation_type;
    double average=0,sum=0, array[12][12];
    int i,j,count=1;
    cin>>calculation_type;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin>>array[i][j];
        }
    }
    if(calculation_type=='S'){
        for(i = 1;i < 12; i++){
            for(j = 0;j<i;j++){
                sum+=array[i][j];     
            }
            count++;
        }
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(calculation_type == 'M'){
        for ( i = 1; i < 12; i++){
            for(j = 0; j < i; j++){
                sum+=array[i][j];
                average = sum/66.0;
            }
        }
        cout<<fixed<<setprecision(1)<<average<<endl;
    }
    return 0;
}

// #include <stdio.h>
// int main(){
//     double M[12][12],sum = 0;
//     int i,j,counter = 1;
//     char O[2];
//     scanf("%s", O);
    
//     for(i = 0; i < 12; i++){
//         for(j = 0; j < 12; j++){
//             scanf("%lf", &M[i][j]);
//         }
//     }
//     for(i = counter; i < 12; i++){
//         for(j = 0; j < counter; j++){
//             sum += M[i][j];
//         }
//         counter++;
//     }
//     if(O[0] == 'S'){
//         printf("%.1lf\n", sum);
//     }else if(O[0] == 'M'){
//         printf("%.1lf\n", sum / 66.0);
//     }
//     return 0;
// }