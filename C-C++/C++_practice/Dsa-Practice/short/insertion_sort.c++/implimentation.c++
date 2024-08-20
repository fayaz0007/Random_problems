#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& numbers,int n){
    for(int i = 1;i<n;i++){
        int current = numbers[i];
        int j = i-1;
        while(numbers[j]>current && j>=0){
            numbers[j+1] = numbers[j];
            j--;
        }
        numbers[j+1]=current;
    }
}


int main(){
    vector<int> numbers;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        numbers.push_back(a);
    }
    insertionSort(numbers,n);
    for(int i = 0;i<n;i++){
        cout<<numbers[i]<<" ";
    }
}