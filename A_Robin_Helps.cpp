#include <bits/stdc++.h>
using namespace std;

void solution(int TotalIteration){
    
    for(int i = 0; i<TotalIteration;i++){
        int maxpeople , threshold;
        cin>>maxpeople>>threshold;
        int count =0;
        int holding_coins = 0;
        for(int i = 0;i<maxpeople;i++){
            int peoples_coins;
            cin>>peoples_coins;
            if(peoples_coins>=threshold){
                holding_coins += peoples_coins;
            }
            if(peoples_coins == 0 && holding_coins>0){
                holding_coins--;
                
                count++;
                
            }
            
        }
        cout<<count<<endl;

    }


}



int main(){
    int TotalIteration;
    cin>>TotalIteration;
    solution(TotalIteration);
}

