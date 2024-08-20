#include <bits/stdc++.h>
using namespace std;

int sqreRoot(int x){
    int low =0, high = x, ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        int sql = mid*mid;
        if(sql==x){
            return mid;
        }else if(sql>x){
            high = mid -1;

        }else{
            low = mid +1;
            ans = mid;
        }
    }
    return ans;
}


int main(){
    int x;
    cin>>x;
    cout<<sqreRoot(x)<<endl;
    sqrt()
}