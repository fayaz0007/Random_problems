#include "iostream"
#include "iomanip"
using namespace std;
int main(){
    int count=0;
    float n,cal,sum=0.0;
    while(true){
        cin>>n;
        if (n < 0 || n > 10){
            cout << "nota invalida" << endl;
            continue;
        }
        else{
            sum += n;
            count++;
        }    
        if (count == 2)
        {
            break;
        }
        
    }
    cal = sum /2;
    cout<<fixed<<setprecision(2)<<"media = "<<cal<<endl;
}
    
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int count = 0;
//     float n,cal,sum = 0.0;
//     while (true) {
//         cin >> n;
        
//         if (n < 0 || n > 10) {
//             cout << "nota invalida" << endl;
//             continue;
//         }
//         else {
//             sum += n;
//             count++;
//         }
        
//         if (count == 2) {
//             break;
//         }
//     }
//     cal = sum /2;
//     cout<<fixed<<setprecision(2)<<cal<<endl;
    
    
//     return 0;
// }