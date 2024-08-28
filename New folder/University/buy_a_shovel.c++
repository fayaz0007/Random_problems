#include <stdio.h>
using namespace std;

int gcd(int dim, int price, int extra){
    int mx;
    if(dim<=10){
        mx = 10;
    }else{
        mx = price;
    }
    int mx2;
    int extraPrice = 10+extra;

    if(extraPrice >= price){
        mx2 = extraPrice;
    }
    int ans1,ans2;
    int i =0;
    for(int i = mx;;i++){
        if(i%10==0 && i%price ==0){
            ans1=i/price;
            break;
        }
    }
    for(int i = mx;;i++){
        if(i%10==0 && i%extraPrice ==0 && i%price==0){
            ans1=i/price;
            break;
        }else{
            return ans2;
        }
    }

    if(ans1<=ans2){
        return ans1;
    }

}
int main(){
    int k,r;
    scanf("%d%d",&k,&r);
    int ans = gcd(10,k,r);
    printf("%d\n",ans);
}