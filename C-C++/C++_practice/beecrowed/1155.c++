#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float i,end_sequence=100,s=1;
    for(i = 2; i <= end_sequence; i++){
        s += (1/i);
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
}