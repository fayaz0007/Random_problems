#include <bits/stdc++.h>
using namespace std;


void soluTion(string side,string sentence,int n){
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string actualSentence = "";
    if(side=="R"){    
        for(int i = 0;i<n;i++){
            for(int j = 0;j<keys.size();j++){
                if(sentence[i]==keys[j]){
                    actualSentence+=keys[j-1];
                    break;
                }
            }
        }
    }else if(side=="L"){
        for(int i = 0;i<n;i++){
            for(int j = 0;j<keys.size();j++){
                if(sentence[i]==keys[j]){
                    actualSentence+=keys[j+1];
                    break;
                }
            }
        }
    }
    cout<<actualSentence<<endl;
    
}

int main(){
    string rout,inputSentence;
    cin>>rout>>inputSentence;
    int n = inputSentence.size();
    soluTion(rout,inputSentence,n);

}