#include <bits/stdc++.h>
using namespace std;
bool checkArrary(int arr[],int n){
    if(n==1){
        return true;
    }
    bool result=checkArrary(arr+1,n-1);
    return (arr[0]<arr[1] && result);
        
    

}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    cout<<checkArrary(arr,n);
}