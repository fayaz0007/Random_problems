#include <bits/stdc++.h>
using namespace std;
vector<int>numbers;
void selectionSort(int n){
    for(int i = 0;i<n;i++){
        int min_num = i;
        for(int j = i+1;j<n;j++){
            if(numbers[j]<numbers[min_num]){
                min_num =  j;
            }
        }
        swap(numbers[i],numbers[min_num]);
    }
}
int binarySearching(int n){
    int low=0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(numbers[mid]==0){
            low = mid +1;
        }else{
            if(mid == 0 || numbers[mid-1]!=numbers[mid]){
                return (n-mid);
            }else{
                high = mid -1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        numbers.push_back(a);
    }

    selectionSort(n);
    for(int i = 0;i<n;i++){
        cout<<numbers[i]<<" ";
    }
    int result = binarySearching(n);
    cout<<result;

}

