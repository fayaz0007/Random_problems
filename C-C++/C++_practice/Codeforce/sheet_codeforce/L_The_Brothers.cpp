#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    string first_name,last_name,first_person,secend_person;
    for(i=0;i<=1;i++){
        cin>>first_name>>last_name;
        if(i==0){
            first_person = last_name;
        }
        else if(i==1){
            secend_person = last_name;
        }
    }

    if(first_person != secend_person){
        printf("NOT");
    }
    else{
        printf("ARE Brothers");
    }
}
