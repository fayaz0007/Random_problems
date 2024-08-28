#include <iostream>
using namespace std;
int main(){
    int co=0,un=0,x,n,i,j,sum=0;
    cin>>n;
    for(i = 1; i <= n; i++){
        cin>>x;
        co=0;
        un=0;
        if(x==1||x==2||x==3){
            cout<<x<<" eh primo"<<endl;
        }
        for(j = 2; j < x;j++){
            if(x%j==0){
                co+=1;
            }
            else{
                un+=1;
            }
        }
        if(co>0){
            cout<<x<<" nao eh primo"<<endl;
        }
        else if(un>0){
            cout<<x<<" eh primo"<<endl;
        }
    }

} //{wrong way little bugy !!!!!!}


//optimized way
// #include <iostream>
// using namespace std;
// int main(){
//     int co=0,x,n,i,j;
//     cin>>n;
    
//     for(i = 1; i <= n; i++){
//         cin>>x;
//         co=0;
//         for(j = 1; j <= x;j++){
//             if(x%j==0){
//                 co+=1;
//             }
//         }
//         if(co==2 && 1 !=n){
//             cout<<x<<" eh primo"<<endl;
//         }
//         else{
//             cout<<x<<" nao eh primo"<<endl;
//         }
//     }

// }