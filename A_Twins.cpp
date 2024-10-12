#include <bits/stdc++.h>
using namespace std;


void Insertion_Sort(vector<int>& coins, int leangth){
    for(int i = 1;i<leangth;i++){
        int current = coins[i];
        int j = i-1;
        while(coins[j]>current && j>=0){
            coins[j+1] = coins[j];
            j--;
        }
        coins[j+1] = current;
    }
}

void Calvulation(vector<int>& coins, int leangth){
    Insertion_Sort(coins,leangth);
    int totalSum = accumulate(coins.begin(),coins.end(),0),current = 0,count = 0;
    for(int i = leangth-1;i>=0;i--){
        current+=coins[i];
        count++;
        totalSum-=coins[i];
        cout<<current<<" "<<totalSum<<endl;
        if(totalSum<current){
            break;
        }
    }
    cout<<count;
}

int main(){
    int numberOfCoins;
    cin>>numberOfCoins;
    vector<int> coins(numberOfCoins);
    for(int i = 0;i<numberOfCoins;i++){
        
        cin>>coins[i];
        
    }
    Calvulation(coins,numberOfCoins);
}