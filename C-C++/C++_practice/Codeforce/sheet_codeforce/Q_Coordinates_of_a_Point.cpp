#include "bits/stdc++.h"
using namespace std;
int main(){
    float firstNumber,secendNumber;
    cin>>firstNumber>>secendNumber;
    if(firstNumber>0 && secendNumber > 0){
        cout<<"Q1"<<endl;
    }
    if(firstNumber<0 && secendNumber > 0){
        cout<<"Q2"<<endl;
    }
    if(firstNumber<0 && secendNumber < 0){
        cout<<"Q3"<<endl;
    }
    if(firstNumber >0 && secendNumber < 0){
        cout<<"Q4"<<endl;
    }
    if(firstNumber > 0 &&secendNumber == 0 || firstNumber < 0 &&secendNumber == 0 ){
        cout<<"Eixo X"<<endl;
    }
    if(firstNumber == 0 &&secendNumber < 0 || firstNumber == 0 &&secendNumber > 0 ){
        cout<<"Eixo Y"<<endl;
    }
    if(firstNumber==0&&secendNumber == 0){
        cout<<"Origem"<<endl;
        
    }
}