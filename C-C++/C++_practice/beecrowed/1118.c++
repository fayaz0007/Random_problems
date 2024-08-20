// #include "iostream"
// #include "iomanip"
// using namespace std;
// int main(){
//     int x,count;
//     double cal=0,sum=0,n;
//     while(true){
//         cin>>n;
//         if(n<0||n>10){
//             cout<<"nota invalida"<<endl;
//         }
//         else{
//             cal++;
//             sum += n;
//         }
//         if (cal == 2){
//             count = sum/2;
//             cout<<fixed<<setprecision(2)<<count<<endl;
//             sum = 0;
//             count = 0;
//         }
//         else if (cal == 2){
//             cin>>x;
//             if (x<1||x>2)
//                 {
//                     cout<<"novo calculo (1-sim 2-nao)";
//                 }
//             else if(x==1){
//                 continue;
//             }
//             else if(x == 2){
//                 break;
//             }    
//         }

//     }
// }
// #include "iostream"
// #include "iomanip"
// using namespace std;
// double first_half()
// {
//         int x,cal=0;
//         double count,sum=0,n;
//         while(true){
//             cin>>n;
//             if(n<0||n>10){
//             cout<<"nota invalida"<<endl;
//             }
//             else{
//                 cal++;
//                 sum += n;
//             }
//             if (cal == 2){
//                 count = sum/2;
//                 cout<<fixed<<setprecision(2)<<count<<endl;
//                 sum = 0;
//                 count = 0;
//                 break;
//             }
//         }
// }
// int secend_half(){
//     int x;
//     while (true)
//     {
//         cin>>x;
//         if(x<1||x>2){
//             cout<<"novo calculo (1-sim 2-nao)"<<endl;
//             continue;
//         }
//         else if (x==1){
//             first_half();
//         }
//         else if(x==2){
//             break;
//         }
//     }
    
// }
// int main(){
//     int x;
//     first_half();
//     secend_half();
// }
#include "iostream"
#include "iomanip"
using namespace std;
int main(){
    double n,x,y,avg;
    int x_flll = 0;
    int y_fill = 0;
    r:{
        x_flll = 0;
        y_fill = 0;
        while(1)
        {    
            cin>>n;
            if(n>=0.0&&n<=10.0)
            {    
                if(x_flll==1)
                {
                    y=n;
                    y_fill=1;
                }
                else
                {
                    x=n;
                    x_flll=1;
                }
                if(x_flll==1&&y_fill==1){
                    avg = (x+y)/2;
                    cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;
                    do{
                        cout<<"novo calculo (1-sim 2-nao)"<<endl;
                        cin>>x;
                        if(x==1)
                            goto r;
                    }while(x!=2);
                    if(x==2){
                        break;
                    }
                }
            }
           
           else{
                cout<<"nota invalida"<<endl;
            }     
        } 
    }
    return 0;
}    
// #include "iostream"
// #include "iomanip"
// using namespace std;
// int main(){
//     int x,cal=0;
//     double count,sum=0,n;
//     r:{
//         while(true){
//             cin>>n;
//             if(n<0||n>10){
//                 cout<<"nota invalida"<<endl;
//             }
//             else{
//                 cal++;
//                 sum += n;
//             }
//             if (cal == 2){
//                 count = sum/2;
//                 cout<<fixed<<setprecision(2)<<count<<endl;
//                 sum = 0;
//                 count = 0;
//                 do{
//                     cout<<"novo calculo (1-sim 2-nao)"<<endl;
//                     cin>>x;
//                     if(x==1)
//                         goto r;
//                 }while(x!=2);
//                 if(x==2){
//                     break;
//                 }
//             }
//         } 
//     }
//     return 0;  
// }