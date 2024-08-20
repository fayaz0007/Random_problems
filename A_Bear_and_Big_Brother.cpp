#include <bits/stdc++.h>
using namespace std;

int countYear(int limak, int bob){
    int count = 0,limakCalcu,bobCalcu;
    while(true){
        limak = limak*3;
        bob = bob*2;
        count++;
        if(limak>bob){
            break;
        }
    }
    return count;


}

int main(){
    int limak , bob;
    cin>>limak>>bob;
    int result = countYear(limak,bob);
    cout<<result;
}