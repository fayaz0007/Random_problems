#include <bits/stdc++.h>

using namespace std;
int main(){
    srand(time(0));
    int randome_num = rand()%11;
    randome_num = rand()%11;
    cout<<randome_num;
    for(int i = 1; i<30;i++){
        randome_num = rand()%11;
        cout<<randome_num<<endl;
    }
}
