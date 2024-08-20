#include <bits/stdc++.h>
using namespace std;
int main(){
    long long sum = 0;
    int n,k,l,h,a,b;
    cin>>n>>a>>b;
    for(int i = 1;i<=n;i++){
        if(i<10){
            if(i>=a&&i<=b){
                sum+=i;
            }
        }
        else{
                k = i;
                h = 0;
                while(k!=0){
                    l = k%10;
                    k/=10;
                    h += l;

                }
                if(h>=a && h<=b){
                    sum+=i;
                }
            }
    }
    cout<<sum<<endl;
}