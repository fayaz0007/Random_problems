#include <bits/stdc++.h>
using namespace std;
int main(){
    long long numSiz,index,count=0;
    cin>>numSiz>>index;
    vector<long long int>numStor;
    for(long long  i = 0;i<numSiz;i++){
        if(i%2!=0){
            numStor.push_back(i);
        }
    }
    for(long long i = 0;i<numSiz;i++){
        if(i%2==0 && i != 0){
            numStor.push_back(i);
        }
    }
    cout<<numStor[index-1]<<endl;
}