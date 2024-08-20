// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,n,cal=0;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         cout<<i<<" ";
//             cal+=i;
//             cal=cal*i;
//             cout<<cal<<" ";
//             cal=cal*i;
//             cout<<cal<<endl;
//             cal=0;
//     }
            
// }


//optimized version 


#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<i+1<<" "<<pow(i+1,2)<<" "<<pow(i+1,3)<<endl;
    }
    return 0;
}


//fucking python shit


// n=int(input())
// for i in range(1,n+1):
//     print("{} {} {}".format(i,i*i,i*i*i))//damn bro are you kidding me!!!!!!!