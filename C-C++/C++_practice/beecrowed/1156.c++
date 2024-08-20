#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float s=1;
    int b = 2;
    for(int i=3;i<=39;i++){
        s+= (float)i/(float)b;
        i++;
        b*=2;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
}
// #include <stdio.h>

// int main(){
//     float soma = 1;
//     int b = 2;
//     for(int i = 3; i < 40; i++){
//             soma += (float)i/(float)b;
//             i++;
//             b *= 2;
//     }
//     printf("%.2f\n",soma);
//     return 0;
// }