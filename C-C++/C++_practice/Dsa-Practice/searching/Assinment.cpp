#include <bits/stdc++.h>
using namespace std;
vector<int> num;
int binarySearch(int n,int target){
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(num[mid]==target){
                return mid;
            }
            else if(num[mid]>target){
                high = mid-1;
            }
            else if(num[mid]<target){
                low = mid+1;
            }
        }
    return -1;
}
int main(){
    int n,key,a;
    cin>>n>>key;
    for(int i = 0;i<n;i++){
        cin>>a;
        num.push_back(a);
    }
    int output = binarySearch(n,key); 
    if(output == -1){
        cout<<"Not Found";

    }else{
        cout<<output;
    }
}