#include <bits/stdc++.h>
using namespace std;

void bubbleShort(vector<int>& numbers,int leangth){
    for(int i = 0;i<leangth;i++){
        for(int j = 0;j<leangth-1;j++){
            if(numbers[j]>numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
}

int main(){
    int total;
    cin>>total;
    
    vector<int> numbers;
    for(int i = 0;i<total;i++){
        int a;
        cin>>a;
        numbers.push_back(a);
    }
    bubbleShort(numbers,total);
    for(int i = 0;i<total;i++){
        cout<<numbers[i]<<" ";
    }
    
}