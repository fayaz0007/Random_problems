#include <iostream>
using namespace std;
int main(){
    int R,C,r;
    cin>>R>>C;
    for( r = 0;r<2;r++){
        for(int c = 0;c<2;c++){
            int x;
            cin>>x;
            if(r+1==R&&c+1==C){
                cout<<x<<endl;
            }
        }
    }
    
}  