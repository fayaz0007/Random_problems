#include <bits/stdc++.h>
using namespace std;

void bobbulShort(vector<int>& numbers,int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1;j++){
            if(numbers[j]>numbers[j+1]){
                swap(numbers[j],numbers[j+1]);
            }
        }
    }
}

int main(){
    vector <int> numbers;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        numbers.push_back(a);
    }
    bobbulShort(numbers,n);
    for(int i = 0;i<n;i++){
        cout<<numbers[i]<<" ";
    }

}