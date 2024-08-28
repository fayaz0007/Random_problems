#include <bits/stdc++.h>
using namespace std;
vector<int> numbers;
void insertionSort(int n){
    for(int i = 1;i<n;i++){
        int current = numbers[i];
        int j = i-1;
        while(numbers[j]>current && j>=0){
            numbers[j+1]=numbers[j];
            j--;
        }
        numbers[j+1]=current;
    }
}
int searching(int n,int key){
        int low= 0, high =n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(numbers[mid]>key){
                high = mid -1;
            }
            else if(numbers[mid] < key){
                low = mid +1;
            }
            else{
                if(numbers[mid]==0 || numbers[mid-1]!=numbers[mid]){
                    return mid;
                }else{
                    high = mid-1;
                }
            }
        }
        return -1;
}
int main(){
    int n,key;
    cin>>n>>key;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        numbers.push_back(a);
    }
    insertionSort(n);
    for(int i = 0;i<n;i++){
        cout<<numbers[i]<<" ";
    }
    int result = searching(n,key);
    if(result==-1){
        cout<<"Not Found";

    }else{
        cout<<result;
    }
}